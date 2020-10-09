class Solution {
public:
    bool bo[21]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1};
    bool a[20];
    int f[20][2][20];
    int dp(int pos,bool full, int temp)
    {
        if(pos==-1)return bo[temp];
        if(f[pos][full][temp]!=-1)return f[pos][full][temp];
        int &ans=f[pos][full][temp];
        ans=0;
        if(full)
            for(int i=0;i<=a[pos];i++)
                ans+=dp(pos-1,full&(i==a[pos]),temp+(i==1));
        else 
            for(int i=0;i<=1;i++)
                ans+=dp(pos-1,0,temp+(i==1));
        return ans;
    }
    int js(int x)
    {
        memset(f,-1,sizeof(f));
        for(int i=0;i<20;i++)a[i]=x&(1<<i);
        return dp(19,1,0);
    }
    int countPrimeSetBits(int L, int R) {
        return js(R)-js(L-1);
    }
};

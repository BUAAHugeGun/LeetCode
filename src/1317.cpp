class Solution {
public:
    int sta[15],top;
    vector<int> getNoZeroIntegers(int n) {
        int jie=0;
        while(n)sta[++top]=n%10,n/=10;
        int a=0,b=0,base=1;
        for(int i=1;i<=top;i++)if(i==top)
        {
            sta[i]-=jie;
            a+=sta[i]*base;
        }
        else
        {
            sta[i]-=jie;
            if(sta[i]==1)b+=2*base,a+=9*base,jie=1;
            else if(sta[i]==0)b+=base,a+=9*base,jie=1;
            else b+=base,a+=(sta[i]-1)*base,jie=0;
            base*=10;
        }
        if(!b)b=a/2,a=a-b;
        vector<int> ret(2);
        ret[0]=a,ret[1]=b;
        return ret;
    }
};

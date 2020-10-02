class Solution {
public:
    int ch[111][2],w[111],s[111],r[111],ed,root;
    vector<int> ret;
    void maintain(int x){if(x)s[x]=1+s[ch[x][0]]+s[ch[x][1]];}
    void rotate(int &k,int d)
    {
        int p=ch[k][d^1];
        ch[k][d^1]=ch[p][d];
        ch[p][d]=k;
        maintain(k);
        maintain(p);k=p;
    }
    void add(int &k,int x,int pos)
    {
        if(!k)k=++ed,w[k]=x,s[k]=1,ch[k][0]=ch[k][1]=0,r[k]=rand();
        else if(s[ch[k][0]]+1<=pos)
        {
            add(ch[k][1],x,pos-s[ch[k][0]]-1);
            s[k]++;
            if(r[ch[k][1]]<r[k])rotate(k,0);
        }
        else 
        {
            add(ch[k][0],x,pos);
            s[k]++;
            if(r[ch[k][0]]<r[k])rotate(k,1);
        }
    }
    void print(int k)
    {
        if(!k)return;
        print(ch[k][0]);
        ret.push_back(w[k]);
        print(ch[k][1]);
    }
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index)     {
        for(int i=0;i<nums.size();i++)
        {
            add(root,nums[i],index[i]);
        }
        print(root);
        return ret;
    }
};

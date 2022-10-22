class Solution {
public:
    int a[27],next[27],pre[27],head=0,tail=25,tot;
    string t;
    void del(int x)
    {
        if(head==tail)return;
        else if(x==head)head=next[x];
        else if(x==tail)tail=pre[x];
        else 
        {
            next[pre[x]]=next[x];
            pre[next[x]]=pre[x];
        }
    }
    void sel1()
    {
        while(a[head]==0)head=next[head];
        int x=head;
        while(1)
        {
            a[x]--;
            t+=x+'a';
            int tt=tail;
            if(!a[x])del(x);
            if(x==tt)break;
            x=next[x];
        }
    }
    void sel0()
    {
        while(a[tail]==0)tail=pre[tail];
        int x=tail;
        while(1)   
        {
            a[x]--;
            t+=x+'a';
            int hh=head;
            if(!a[x])del(x);
            if(x==hh)break;
            x=pre[x];
        }
    }
    string sortString(string s) {
        for(int i=0;i<25;i++)next[i]=i+1,pre[i+1]=i;
        for(auto &c:s)a[c-'a']++;
        for(int i=0;i<26;i++)if(!a[i])del(i);
        tot=s.length();
        int d=0;
        while(tot!=t.length())
        {
            d^=1;
            if(d)sel1();
            else sel0();
        }
        return t;
    }
};

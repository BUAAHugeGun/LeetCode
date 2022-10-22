class Solution {
public:
    unordered_map<int,bool> mp;
    bool isHappy(int n) {
        if(mp.count(n))return mp[n];
        if(n==1)return 1;
        if(n==4)return 0;
        int nn=n,x=0;
        while(nn){int c=nn%10;x+=c*c;nn/=10;}
        return mp[n]=isHappy(x);
    }
};

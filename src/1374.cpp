class Solution {
public:
    string generateTheString(int n) {
        string ret;
        for(int i=0;i<n;i++)ret+='y';
        if(n&1)return ret;
        ret[0]='z';
        return ret;
    }
};

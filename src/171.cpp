class Solution {
public:
    int titleToNumber(string s) {
        int ret=0;
        for(auto &c:s)
            ret=ret*26-'A'+1+c;
        return ret;
    }
};

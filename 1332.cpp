class Solution {
public:
    int pre[1010];
    int removePalindromeSub(string s) {
        string t=s;
        reverse(s.begin(),s.end());
        return s==""?0:s==t?1:2;
    }
};

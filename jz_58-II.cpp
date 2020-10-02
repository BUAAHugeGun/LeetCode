class Solution {
public:
    string reverseLeftWords(string s, int n) {
        return s.substr(n).append(s,0,n);
    }
};

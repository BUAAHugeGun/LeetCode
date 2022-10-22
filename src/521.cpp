class Solution {
public:
    int findLUSlength(string a, string b) {
        return a!=b?max(a.length(),b.length()):-1;
    }
};

class Solution {
public:
    string reverseWords(string s) {
        stringstream a(s),b;
        string t;
        while(a>>t)reverse(t.begin(),t.end()),b<<t<<" ";
        string ret=b.str();
        ret.erase(s.length());
        return ret;
    }
};

class Solution {
public:
    char t[111];
    string restoreString(string s, vector<int>& indices) {
        for(int i=0;i<indices.size();i++)t[indices[i]]=s[i];
        return string(t);
    }
};

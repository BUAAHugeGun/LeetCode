class Solution {
public:
    int bo[26];
    char findTheDifference(string s, string t) {
        for(auto &c:s)bo[c-'a']++;
        for(auto &c:t)if(!bo[c-'a'])return c;
        else bo[c-'a']--;
        return 0;
    }
};

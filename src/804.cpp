class Solution {
public:
    char dic[33][11]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string,bool> mp;
        for(auto &s:words)
        {
            string temp;
            for(auto &c:s)temp+=dic[c-'a'];
            mp[temp]=1;
        }
        return mp.size();
    }
};

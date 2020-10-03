class Solution {
public:
    string replaceSpace(string s) {
        string ret;
        for(auto &c:s)
        {
            if(c!=' ')ret+=c;
            else ret+="%20";
        }
        return ret;
    }
};

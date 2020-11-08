class Solution {
public:
    int sum[444];
    bool isAnagram(string s, string t) {
        int tot=0;
        for(auto &c:s)sum[c]++,tot++;
        for(auto &c:t)
            if(!sum[c])return 0;
            else sum[c]--,tot--;
        return !tot;
    }
};

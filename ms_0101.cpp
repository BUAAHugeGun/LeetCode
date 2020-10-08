class Solution {
public:
    bool bo[266];
    bool isUnique(string astr) {
        for(auto &c:astr)
        {
            if(bo[c])return 0;
            bo[c]=1;
        }
        return 1;
    }
};

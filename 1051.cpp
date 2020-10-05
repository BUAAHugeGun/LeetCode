class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ret=heights;
        sort(ret.begin(),ret.end());
        int x=0;
        for(int i=0;i<ret.size();i++)if(heights[i]!=ret[i])x++;
        return x;
    }
};

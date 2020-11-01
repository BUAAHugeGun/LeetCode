class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int hang=1,temp=0;
        for(auto &c:S)if(temp+widths[c-'a']>100)hang++,temp=widths[c-'a'];
        else temp+=widths[c-'a'];
        vector<int> ret(2);
        ret[0]=hang,ret[1]=temp;
        return ret;
    }
};

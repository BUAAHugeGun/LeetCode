class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";
        int ans=222;
        for(int i=0;i<strs.size()-1;i++)
        {
            int len=min(strs[i].length(),strs[i+1].length());
            ans=min(ans,len);
            for(int j=0;j<len;j++)
                if(strs[i][j]!=strs[i+1][j])
                {
                    ans=min(ans,j);
                    break;
                }
        }
        return strs[0].substr(0,ans);
    }
};

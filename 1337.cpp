class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multiset<pair<int,int>> st;
        for(int i=0;i<mat.size();i++)
        {
            int tot=0;
            for(auto &x:mat[i])if(x)tot++;
            else break;
            st.insert(make_pair(tot,i));
        }
        vector<int> ret;
        for(auto &v:st)
        {
            ret.push_back(v.second);
            if(ret.size()==k)break;
        }
        return ret;
    }
};

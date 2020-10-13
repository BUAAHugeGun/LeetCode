class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int n=A.size(),m=A[0].size();
        vector<vector<int>> ret;
        for(int i=0;i<m;i++)
        {
            vector<int> t;
            for(int j=0;j<n;j++)
            {
                t.push_back(A[j][i]);
            }
            ret.push_back(t);
        }
        return ret;
    }
};

class Solution {
public:
    void dfs(vector<int>& A, vector<int>& B, vector<int>& C,int x)
    {
        if(x==1)C.push_back(A.back()),A.pop_back();
        else 
        {
            dfs(A,C,B,x-1);
            C.push_back(A.back()),A.pop_back();
            dfs(B,A,C,x-1);
        }
    }
    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
        dfs(A,B,C,A.size());
    }
};

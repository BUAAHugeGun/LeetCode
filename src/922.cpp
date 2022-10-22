class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> ret(A.size());
        int l=0,r=0;
        for(int i=0;i<A.size();i++)
            if(i&1)
            {
                while(!(A[l]&1))l++;
                ret[i]=A[l++];
            }
            else 
            {
                while(A[r]&1)r++;
                ret[i]=A[r++];
            }
        return ret;
    }
};

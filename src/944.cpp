class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int ret=0;
        for(int i=0;i<A[0].length();i++)
        {
            char shang=0;
            for(auto &s:A)
                if(s[i]<shang){ret++;break;}
                else shang=s[i];
        }
        return ret;
    }
};

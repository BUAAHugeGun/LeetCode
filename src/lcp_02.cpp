class Solution {
public:
    vector<int> fraction(vector<int>& cont) {
        vector<int> ret(2);
        ret[0]=cont[cont.size()-1],ret[1]=1;
        for(int i=cont.size()-2;i>=0;i--)
        {
            swap(ret[0],ret[1]);
            ret[0]+=ret[1]*cont[i];
        }
        return ret;
    }
};

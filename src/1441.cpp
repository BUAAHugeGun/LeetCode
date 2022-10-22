class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int temp=0;
        vector<string> ret;
        for(int i=1;i<=n;i++)if(temp<target.size())
        {
            if(target[temp]==i)ret.push_back("Push"),temp++;
            else ret.push_back("Push"),ret.push_back("Pop");
        }
        return ret;
    }
};

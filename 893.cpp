class Solution {
public:
    unordered_map<string,int> mp;
    int numSpecialEquivGroups(vector<string>& A) {
        for(auto &s:A)
        {
            string l,r;
            for(int i=0;i<s.length();i++)
                if(i&1)l+=s[i];
                else r+=s[i];
            sort(l.begin(),l.end());
            sort(r.begin(),r.end());
            l+=r;
            mp[l]++;
        }
        return mp.size();
    }
};

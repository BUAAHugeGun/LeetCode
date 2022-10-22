class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        A+=" ";
        B+=" ";
        unordered_map<string,int> mp;
        string word;
        for(int i=0;i<A.length();i++)
            if(A[i]==' ')mp[word]++,word="";
            else word+=A[i];
        for(int i=0;i<B.length();i++)
            if(B[i]==' ')mp[word]++,word="";
            else word+=B[i];
        vector<string> ret;
        for(auto &c:mp)if(c.second==1)ret.push_back(c.first);
        return ret;
    }
};

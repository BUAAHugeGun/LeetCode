class Solution {
public:
    unordered_map<string,int> mp;
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        for(auto &s:cpdomains)
        {
            int pos=0;
            int x=0;
            while(s[pos]!=' ')x=x*10+s[pos++]-'0';
            s=s.substr(pos+1);
            mp[s]+=x;
            pos=0;
            while(1)
            {
                while(pos<=s.length()&&s[pos]!='.')pos++;
                if(pos>s.length())break;
                pos++;
                s=s.substr(pos);
                pos=0;
                mp[s]+=x;
            }
        }
        vector<string> ret;
        for(auto &v:mp)
            ret.push_back(to_string(v.second)+" "+v.first);
        return ret;
    }
};

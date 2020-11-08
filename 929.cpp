class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for(auto &s:emails)
        {
            int pos=s.find("@");
            string t=s.substr(pos);
            string temp;
            for(int i=0;i<pos;i++)
                if(s[i]=='+')break;
                else if(s[i]!='.')temp+=s[i];
            st.insert(temp+t);
        }
        return st.size();
    }
};

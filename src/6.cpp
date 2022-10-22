class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> t(numRows);
        int len=numRows*2-2;
        for(int i=0;i<s.length();i++)
        {
            int x=(len?i%len:0);
            if(x>=numRows)
            {
                x-=numRows;
                x=numRows-2-x;
            }
            t[x]+=s[i];
        }
        string ret;
        for(auto ss: t)
        {
            // cout<<ss<<"\n";
            ret+=ss;
        }
        return ret;
    }
};

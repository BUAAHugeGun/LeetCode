class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        text=" "+text+" ";
        vector<string> ret;
        vector<int> a;
        vector<string> s;
        int shang=0;
        for(int i=shang;i<text.length();i++)
            if(text[i]==' ')a.push_back(i);
        for(int i=0;i<a.size()-1;i++)
            s.push_back(text.substr(a[i]+1,a[i+1]-a[i]-1));
        for(int i=0;i<s.size()-2;i++)
            if(s[i]==first&&s[i+1]==second)
                ret.push_back(s[i+2]);
        return ret;
    }
};

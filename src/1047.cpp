class Solution {
public:
    char s[20020];int top=0;
    string removeDuplicates(string S) {
        for(auto &c:S)
            if(top>0&&s[top-1]==c)top--;
            else s[top++]=c;
        s[top]=0;
        return string(s);
    }
};

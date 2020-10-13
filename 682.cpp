class Solution {
public:
    int sta[1010],top=0;
    int calPoints(vector<string>& ops) {
        int ans=0;
        for(auto &S:ops)
        {
            if(S=="+")sta[top+1]=sta[top]+sta[top-1],top++,ans+=sta[top];
            else if(S=="D")sta[top+1]=sta[top]*2,top++,ans+=sta[top];
            else if(S=="C")ans-=sta[top--];
            else sta[top+1]=atoi(S.data()),top++,ans+=sta[top];
        }
        return ans;
    }
};

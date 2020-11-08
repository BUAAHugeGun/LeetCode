class Solution {
public:
    int sum[555];
    int maxNumberOfBalloons(string text) {
        for(auto &c:text)sum[c]++;
        int Min=text.length();
        Min=min(Min,sum['b']);
        Min=min(Min,sum['a']);
        Min=min(Min,sum['l']>>1);
        Min=min(Min,sum['o']>>1);
        Min=min(Min,sum['n']);
        return Min;
    }
};

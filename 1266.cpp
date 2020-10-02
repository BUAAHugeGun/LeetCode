class Solution {
public:
    int dis(vector<int> a,vector<int> b)
    {
        int x=abs(a[0]-b[0]);
        int y=abs(a[1]-b[1]);
        return x+y-min(x,y);
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ret=0;
        for(int i=1;i<points.size();i++)ret+=dis(points[i-1],points[i]);
        return ret;
    }
};

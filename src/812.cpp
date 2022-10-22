class Solution {
public:
    class xl
    {
        public:
        int x,y;
        xl(){}
        xl(int x,int y):x(x),y(y){}
        bool operator < (const xl &rhs)const {return x==rhs.x?y<rhs.y:x<rhs.x;}
        bool operator == (const xl &rhs)const {return x==rhs.x&&y==rhs.y;}
        xl operator + (const xl &rhs)const {return xl(x+rhs.x,y+rhs.y);}
        xl operator - (const xl &rhs)const {return xl(x-rhs.x,y-rhs.y);}
        void print(){printf("%d %d\n",x,y);}
        int dis2(){return x*x+y*y;}
        double dis(){return sqrt(dis2());}
    };
    int D(const xl &a,const xl &b){return a.x*b.x+a.y*b.y;}
    int X(const xl &a,const xl &b){return a.x*b.y-a.y*b.x;}
    int dis2(xl &a,xl &b){return (a-b).dis2();}
    double dis(xl &a,xl &b){return (a-b).dis();}
    xl a[55];
    xl tb[111];

    double largestTriangleArea(vector<vector<int>>& points) {
        int n=0,m=0;
        for(auto &v:points)
        {
            n++;
            a[n].x=v[0],a[n].y=v[1];
        }
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++)
        {
            while(m>1&&X(a[i]-tb[m],tb[m]-tb[m-1])>=0)m--;
            tb[++m]=a[i];
        }
        int tm=m;
        for(int i=n;i>=1;i--)
        {
            while(m>tm&&X(a[i]-tb[m],tb[m]-tb[m-1])>=0)m--;
            tb[++m]=a[i];
        }
        m--;
        for(int i=1;i<=m;i++)tb[i+m]=tb[i];

        double ans=0;
        for(int i=1;i<=m;i++)
        {
            int r=i+2;
            for(int l=i+1;l<i+m-1;l++)
            {
                xl di=tb[l]-tb[i];
                    di.print();
                while(1)
                {
                    int d=X(tb[r]-tb[r-1],di);
                    if(d>=0)
                    {
                        ans=max(abs(X(di,tb[r-1]-tb[l]))/2.,ans);
                        break;
                    }
                    r++;
                }
            }
        }
        return ans;
    }
};

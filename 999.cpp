class Solution {
public:
    int ret=0;
    int d[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    void js(int x,int y,int dx,int dy,vector<vector<char>>& board)
    {
        while(1)
        {
            x+=dx,y+=dy;
            if(x>7||x<0||y>7||y<0)return;
            if(board[x][y]=='p'){ret++;return;}
            if(board[x][y]=='B')return;
        }
    }
    int numRookCaptures(vector<vector<char>>& board) {
        int x,y;
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                if(board[i][j]=='R')x=i,y=j;
        for(int i=0;i<4;i++)js(x,y,d[i][0],d[i][1],board);
        return ret;
    }
};

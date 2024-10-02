class Solution {
public:
    void dfs(vector<vector<char>>& board,vector<vector<int>>&vis,int sr,int sc)
    {
        int n=board.size(),m=board[0].size();
        vis[sr][sc]=1;
        vector<int>r={1,-1,0,0};
        vector<int>c={0,0,-1,1};
        for(int i=0;i<4;i++)
        {
            int nr=sr+r[i];
            int nc=sc+c[i];
            if(nr>=0&&nc>=0&&nr<n&&nc<m&&!vis[nr][nc]&&board[nr][nc]=='O')
            {
                dfs(board,vis,nr,nc);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            if(board[0][i]=='O'&&!vis[0][i])
            {
                dfs(board,vis,0,i);
            }
            if(board[n-1][i]=='O'&&!vis[n-1][i])
            {
                dfs(board,vis,n-1,i);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O'&&!vis[i][0])
            {
                dfs(board,vis,i,0);
            }
            if(board[i][m-1]=='O'&&!vis[i][m-1])
            {
                dfs(board,vis,i,m-1);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0)
                {
                    board[i][j]='X';
                }
            }
        }
    }
};
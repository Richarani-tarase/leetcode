class Solution {
public:
    void dfs(vector<vector<int>>& g,vector<vector<int>>&vis,int r,int c,vector<int>row,vector<int> col)
    {
        int n=g.size(),m=g[0].size();
        vis[r][c]=1;
        for(int i=0;i<4;i++)
        {
            int nr=r+row[i];
            int nc=c+col[i];
            if(nr>=0&&nc>=0&&nr<n&&nc<m&&!vis[nr][nc]&&g[nr][nc]==1)
            {
                dfs(g,vis,nr,nc,row,col);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> g=grid;
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<int>row={0,0,-1,1};
        vector<int>col={-1,1,0,0};
        for(int i=0;i<m;i++)
        {
            if(g[0][i]==1&&!vis[0][i])
            {
                dfs(g,vis,0,i,row,col);
            }
            if(g[n-1][i]==1&&!vis[n-1][i])
            {
                dfs(g,vis,n-1,i,row,col);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(g[i][0]==1&&!vis[i][0])
            {
                dfs(g,vis,i,0,row,col);
            }
            if(g[i][m-1]==1&&!vis[i][m-1])
            {
                dfs(g,vis,i,m-1,row,col);
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j]&&grid[i][j]==1)
                {
                    c++;
                }
            }
        }
        return c;
    }
};
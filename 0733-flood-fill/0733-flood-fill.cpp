class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size(),m=image[0].size();
        int match=image[sr][sc];
        vector<vector<int>>vis(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        vis[sr][sc]=1;
        image[sr][sc]=color;
        vector<int>row={-1,1,0,0};
        vector<int>col={0,0,1,-1};
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr=r+row[i];
                int nc=c+col[i];
                if(nr>=0 && nc>=0 && nr<n && nc<m && vis[nr][nc]==-1 && image[nr][nc]==match)
                {
                    vis[nr][nc]=1;
                    image[nr][nc]=color;
                    q.push({nr,nc});
                }
            }
        }
        return image;
    }
};
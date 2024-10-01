class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int c=0,t=0;
        int count=0,min=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)c++;
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        vector<int>row={-1,0,1,0};
        vector<int>col={0,1,0,-1};
        while(!q.empty())
        {
            int nq=q.size();
            count+=nq;
            for(int l=0;l<nq;l++)
            {
                int a=q.front().first;
                int b=q.front().second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                  if(a+row[i]>=0&&b+col[i]>=0&&a+row[i]<n&&b+col[i]<m&&grid[a+row[i]][b+col[i]]==1)
                    {
                        grid[a+row[i]][b+col[i]]=2;
                        q.push({a+row[i],b+col[i]});
                    }
                }
            }
            if(!q.empty())min++;
        }
        if(count==c)
        {
            return min;
        }
        return -1;
    }
};
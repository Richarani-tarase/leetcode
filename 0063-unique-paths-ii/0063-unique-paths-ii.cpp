class Solution {
public:
    int count(vector<vector<int>>& g,vector<vector<int>>& dp,int i,int j)
    {
        int n=g.size();
        int m=g[0].size();
        if(i>=n||j>=m)
            return 0;
        if(i==n-1&&j==m-1&&g[i][j]!=1)return 1;
        if(g[i][j]==1)return 0;
        if(dp[i][j]!=0)return dp[i][j];
        return dp[i][j]=count(g,dp,i+1,j)+count(g,dp,i,j+1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        return count(obstacleGrid,dp,0,0);
    }
};
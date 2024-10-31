class Solution {
public:
    int find(vector<vector<int>>& g, vector<vector<int>>& dp, int i, int j) {
        if(i==0&&j==0) return g[0][0];
        if(i<0||j<0) return INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=find(g, dp, i-1, j);
        int left=find(g, dp, i, j-1);
        return dp[i][j]=g[i][j]+min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return find(grid, dp, n-1, m-1);
    }
};

class Solution {
public:
    int count(int m,int n,int i,int j,vector<vector<int>>&dp)
    {
        if(i>=m||j>=n)
            return 0;
        if(i==m-1&&j==n-1)
            return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        else
            return dp[i][j]= count(m,n,i+1,j,dp)+count(m,n,i,j+1,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int c=count(m,n,0,0,dp);
        return c;
    }
};
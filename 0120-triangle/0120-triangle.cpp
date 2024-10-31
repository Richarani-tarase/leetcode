class Solution {
public:
    int find(vector<vector<int>>&t,vector<vector<int>>&dp,int i,int j,int n)
    {
        if(dp[i][j]!=-1)return dp[i][j];
        if(i==n-1)return t[i][j];
        int down = t[i][j]+find(t, dp, i+1, j,n);
        int diag = t[i][j]+find(t, dp, i+1, j+1,n);
        return dp[i][j]=min(down,diag);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return find(triangle,dp,0,0,n);
    }
};
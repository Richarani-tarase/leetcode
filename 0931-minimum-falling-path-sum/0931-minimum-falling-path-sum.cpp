class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int j=0;j<m;j++) dp[n-1][j]=matrix[n-1][j];
        for(int i=n-2;i>=0;i--) {
            for(int j=0;j<m;j++) {
                int down=dp[i+1][j];
                int downLeft=(j>0)?dp[i+1][j-1]:INT_MAX;
                int downRight=(j<m-1)?dp[i+1][j+1]:INT_MAX;
                dp[i][j]=matrix[i][j]+min(down,min(downLeft,downRight));
            }
        }
        int ans=INT_MAX;
        for(int j=0;j<m;j++) ans=min(ans,dp[0][j]);
        return ans;
    }
};

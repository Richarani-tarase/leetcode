class Solution {
public:
    int topdown(int n,vector<int>& dp)
    {
        if(n<=1)
        {
            return n;
        }
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=topdown(n-1,dp)+topdown(n-2,dp);
    }
    int climbStairs(int n) {
        // int pre=0,curr=1;
        // for(int i=0;i<n;i++)
        // {
        //     int a=curr+pre;
        //     pre=curr,curr=a;
        // }
        // return curr;
        vector<int>dp(n+2,-1);
        return topdown(n+1,dp);
    }
};
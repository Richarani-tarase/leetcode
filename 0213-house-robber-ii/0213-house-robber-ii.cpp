class Solution {
public:
    int find(vector<int>& nums,int n,vector<int>& dp)
    {
        if(n==0)
        {
            return nums[n];
        }
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        int pick=nums[n]+find(nums,n-2,dp);
        int notpick=find(nums,n-1,dp);
        return dp[n]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int s = nums.size();
        if(s==1)
            return nums[0];
        vector<int>dp(s,-1);
        int ans=find(nums,s-2,dp);
        nums.erase(nums.begin());
        vector<int>dp2(s,-1);
        int ans2=find(nums,s-2,dp2);
        return max(ans,ans2);
    }
};
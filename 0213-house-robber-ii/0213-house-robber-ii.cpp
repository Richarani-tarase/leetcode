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
        int n = nums.size();
        if(n==1)
            return nums[0];
        vector<int>dp(nums.size(),-1);
        int ans=find(nums,nums.size()-2,dp);
        nums.erase(nums.begin());
         vector<int>dp2(nums.size(),-1);
        int ans2=find(nums,nums.size()-1,dp2);
        return max(ans,ans2);
    }
};
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        if(nums.size()<=4)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int k=3;
        for(int i=0;i<=k;i++)
        {
            int a=nums[n-1-i]-nums[k-i];
            ans=min(ans,a);
        }
      return ans;
    }
};
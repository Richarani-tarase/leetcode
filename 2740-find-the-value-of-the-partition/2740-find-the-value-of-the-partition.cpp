class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
         int m,ans=nums[n-1];
        for(int i=0;i<n-1;i++)
        {
            m=nums[i+1]-nums[i];
            ans=min(m,ans);
        }
        return ans;
    }
};
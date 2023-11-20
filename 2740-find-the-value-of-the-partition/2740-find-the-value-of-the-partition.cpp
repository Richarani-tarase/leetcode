class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
         int m,ans=nums[n];
        for(int i=0;i<n;i++)
        {
            m=nums[i+1]-nums[i];
            ans=min(m,ans);
        }
        return ans;
    }
};
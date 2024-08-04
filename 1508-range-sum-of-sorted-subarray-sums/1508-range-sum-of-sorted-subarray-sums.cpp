class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        for(int i=0;i<n-1;i++)
        {
            int sum=nums[i];
            for(int j=i+1;j<n;j++)
            {
                sum+=nums[j];
                nums.push_back(sum);
            }
        }
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=left-1;i<right;i++)
        {
            ans=(ans+nums[i])%((int)pow(10,9)+7);
        }
        return ans;
    }
};
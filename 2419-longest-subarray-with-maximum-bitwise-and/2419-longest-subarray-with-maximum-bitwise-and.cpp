class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=1,count=0;
        int max_ele=*max_element(nums.begin(),nums.end());
        for(auto i:nums)
        {
            if(i==max_ele)
            {
                count++;
                ans=max(ans,count);
            }
            else
            {
                count=0;
            }
        }
        return ans;
    }
};
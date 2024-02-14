class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>ans2;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans.push_back(nums[i]);
            }
            else
            {
                ans2.push_back(nums[i]);
            }
        }
        int index=0;
        for(int i=0;i<ans.size();i++)
        {
            nums[index]=ans[i];
            nums[index+1]=ans2[i];
            index=index+2;
        }
        return nums;
    }
};
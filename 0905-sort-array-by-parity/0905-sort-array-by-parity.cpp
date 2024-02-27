class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // vector<int> arr;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]%2==0)
        //     arr.push_back(nums[i]);
        // }
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]%2!=0)
        //     arr.push_back(nums[i]);
        // }
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]%2==0)
            {
                i++;
            }
            else {
                if(nums[j]%2!=0)
                {
                    j--;
                }
                else
                {
                    swap(nums[i],nums[j]);
                    i++;
                    j--;
                }
            }
        }
        return nums;
    }
};
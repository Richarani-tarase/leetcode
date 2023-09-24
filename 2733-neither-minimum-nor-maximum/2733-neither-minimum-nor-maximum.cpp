class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        if(n==1||n==0)
            return -1;
        int max=nums[n];
        int min=nums[0];
        return nums[1];
    }
};
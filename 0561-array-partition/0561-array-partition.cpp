class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n;i+=2)
        {
             sum=sum+nums[i];
        }    
        return sum;
    }
};
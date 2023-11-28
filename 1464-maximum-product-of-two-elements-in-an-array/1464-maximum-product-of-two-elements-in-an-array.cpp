class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=0;
        int s=0,e=nums.size()-1;
       while(s<e)
        {
            int a=(nums[s]-1)*(nums[e]-1);
            m=max(a,m); 
            if(nums[s]>nums[e])
            {
                e--;
            }
            else
            s++;
        }
        return m;
    }
};
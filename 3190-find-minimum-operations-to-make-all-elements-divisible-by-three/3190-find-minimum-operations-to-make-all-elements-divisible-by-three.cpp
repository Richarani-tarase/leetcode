class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
        for(auto i:nums)
        {
            if(i%3==1||i%3==2)
            {
                c++;
            }
        }
        return c;
    }
};
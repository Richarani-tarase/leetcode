class Solution {
public:
    int climbStairs(int n) {
        int pre=0,curr=1;
        for(int i=0;i<n;i++)
        {
            int a=curr+pre;
            pre=curr,curr=a;
        }
        return curr;
    }
};
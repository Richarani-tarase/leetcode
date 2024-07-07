class Solution {
public:
    int numWaterBottles(int b, int e) {
        int ans=b;
        while(b>=e)
        {
            ans+=b/e;
            int a=b%e;
            b=a+b/e;
        }
        return ans;
    }
};
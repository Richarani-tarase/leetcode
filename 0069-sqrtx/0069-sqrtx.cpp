class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        long long int ans=0;
       while(start<=end)
       {
           long long int mid=(start+end)/2;
           long long int sqrt=(mid*mid);
           if(sqrt==x)
           return mid;
           if(sqrt<x)
           {
               ans=mid;
               start=mid+1;
            }
           else
           end=mid-1;
       }
       return ans;
    }
};
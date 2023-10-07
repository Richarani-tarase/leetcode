class Solution {
public:
    bool isPalindrome(int x) {
    long int temp,rem=0,rev=0;
    temp=x;
    while(temp>0)
    {
       rem=temp%10;
       rev=rev*10+rem;
       temp=temp/10; 
    }
    if(rev==x)
        return true;
     return false;
    }
};
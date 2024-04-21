class Solution {
public:
    void reverse(int &num)
    {
        int ans=0;
        while(num!=0)
        {
            int rem=num%10;
            ans=(ans*10)+rem;
            num=num/10;
        }
        num=ans;
    }
    int maximum69Number (int num) {
        int ans=0,f=0;
        reverse(num);
        while(num!=0)
        {
            int rem=num%10;
            if(rem==6 && f==0)
            {
                rem=9;
                f=1;
            }
            ans=(ans*10)+rem;
            num=num/10;
        }
        return ans;
    }
};
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp=num;
        int a=2;
        while(a>0)
        {    
            int rev=0,rem=0;
            while(temp!='\0')
            {
                rem=temp%10;
                rev=(rev*10)+rem;
                temp=temp/10;
            }
            temp=rev;
            a--;
        }   
        return (num==temp);
    }
};
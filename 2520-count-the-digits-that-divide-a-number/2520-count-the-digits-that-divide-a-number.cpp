class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int a=num;
        while(num)
        {
            int i=num%10;
            if(a%i==0)
            {
                c++;
            }
            num=num/10;
        }
        return c;
    }
};
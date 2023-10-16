class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int a=num;
        while(a)
        {
            if(num%(a%10)==0)
            {
                c++;
            }
            a=a/10;
        }
        return c;
    }
};
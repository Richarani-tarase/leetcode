class Solution {
public:
    string largestOddNumber(string num)
    {
        string max;
        int c=0;
        for(int i=num.size()-1;i>=0;i--)
        {
            if(num[i]%2==0)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        for(int i=0;i<num.size()-c;i++)
        {
            max+=num[i];
        }
        return max;
    }
};
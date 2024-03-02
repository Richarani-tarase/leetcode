class Solution {
public:
    int balancedStringSplit(string s) {
        int c=0,a=0,b=0,i=0;
        while(i<s.length())
        {
            if(s[i]=='R')
                a++;
            else
                b++;
            if(a==b)
            {
                c++;
                a=0;
                b=0;
            }
            i++;
        }
        return c;
    }
};
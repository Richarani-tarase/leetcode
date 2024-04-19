class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                if((s[i]-'0')<(s[j]-'0'))
                    s[j]=s[i];
                else
                    s[i]=s[j];
            }
            i++;
            j--;
        }
        return s;
    }
};
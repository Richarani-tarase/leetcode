class Solution {
public:
    string convert(string s, int n) {
        string ans="";
        int i=0;
        if(s.length()<=1||n==1)
        {
            return s;
        }
        while(i<n)
        {
            int j=i;
            int a=-i;
            while(j<s.length())
            {
                ans+=s[j];
                if(i==0||i==n-1)
                {
                    j+=2*(n-1);
                }
                else
                {
                    a+=2*(n-1);
                    if(a<s.length())
                        ans+=s[a];
                    j+=2*(n-1);
                }
            }
            i++;
        }
        return ans;
    }
};
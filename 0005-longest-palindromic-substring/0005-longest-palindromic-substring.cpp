class Solution {
public:
    string longestPalindrome(string s) {
        int l=0,start,end,curr=0;
        if(s.size()<2)
            return s;
        for(int i=0;i<s.size()-1;i++)
        {
            start=i;
            end=i;
            while(start>=0&&end<s.size())
            {
                if(s[start]==s[end])
                {
                    start--;
                    end++;
                }
                else break;
            }
            int l2=(end-1)-(start+1)+1;
            if(l2>l)
            {
                curr=start+1;
                l=l2;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            start=i;
            end=i+1;
            while(start>=0&&end<s.size())
            {
                if(s[start]==s[end])
                {
                    start--;
                    end++;
                }
                else break;
            }
            int l2=(end-1)-(start+1)+1;
            if(l2>l)
            {
                curr=start+1;
                l=l2;
            }
        }
        return s.substr(curr,l);
    }
};
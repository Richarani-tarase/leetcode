class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        if(haystack.size()<needle.size())
        {
            return -1;
        }
        for(int i=0;i<haystack.size();i++)
        {
            int k=0;
            if(haystack[i]==needle[k])
            {
                int j=i;
                int ans=i;
                while(k<needle.size() && haystack[j]==needle[k] && j<haystack.size())
                {
                    k++;
                    j++;
                }
                if(k==needle.size())
                {
                    return ans;
                }
            }
        }
        return -1;
    }
};
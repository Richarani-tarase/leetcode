class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int i=0,ans=1,count=0;
        if(s=="")
            return 0;
        for(int j=0;j<s.size();j++)
        {
            m[s[j]]++;
            if(m[s[j]]==2){
            while(m[s[j]]>1&&i<=j)
            {
                m[s[i]]--;
                i++;
            }
            }
            else
                ans=max(ans,j-i+1);
        }
        return ans;
    }
};
class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>m;
        int i=0,ans=0;
        for(int j=0;j<s.length();j++)
        {
            m[s[j]]++;
            while(m[s[j]]>=3&&i<=j)
            {
                m[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};
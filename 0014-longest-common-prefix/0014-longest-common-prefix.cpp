class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        string t=strs[0];
        string t2=strs[strs.size()-1];
        for(int i=0;i<t.size();i++)
        {
           if(t[i]==t2[i])
           {
               ans=ans+t[i];
           }
            else
            {
                break;
            }
        }
        return ans;
    }
};
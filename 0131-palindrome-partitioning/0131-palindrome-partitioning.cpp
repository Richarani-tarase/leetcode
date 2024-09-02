class Solution {
public:
    bool ispalindrome(string str)
    {
        int i=0,j=str.size()-1;
        while(i<=j)
        {
            if(str[i]==str[j])
            {
                i++,j--;
            }
            else return false;
        }
        return true;
    }
    void find(string s,int i,vector<vector<string>>&ans,vector<string>&v)
    {
        if(i==s.size())
        {
            ans.push_back(v);
            return;
        }
        for(int j=i;j<s.size();j++)
        {
            if(ispalindrome(s.substr(i,j-i+1)))
            {
                v.push_back(s.substr(i,j-i+1));
                find(s,j+1,ans,v);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        find(s,0,ans,v);
        return ans;
    }
};
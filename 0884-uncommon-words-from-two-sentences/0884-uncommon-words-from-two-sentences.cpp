class Solution {
public:
    void count(string s1,vector<string>&s)
    {
        string str="";
        for(int i=0;i<s1.size();i++)
        {
             if(s1[i]==' ')
            {
                s.push_back(str);
                str="";
            }
            else
            str+=s1[i];
        }
        s.push_back(str);
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int>m;
        vector<string>s;
        vector<string>ans;
        count(s1,s);
        count(s2,s);
        for(auto x:s)
        {
            m[x]++;
        }
        for(auto x:m)
        {
            if(x.second==1)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
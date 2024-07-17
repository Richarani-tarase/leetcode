class Solution {
public:
    void check(string s,vector<int>& v)
    {
        int i=0,j=1;
        v[0]=0;
        while(j<s.size())
        {
            if(s[i]==s[j])
            {
                v[j]=i+1;
                j++;
                i++;
            }
            else
            {
                if(i==0)
                {
                    j++;
                }
                else 
                {
                    i=v[i-1];
                }
            }
        }
    }
    bool repeatedSubstringPattern(string s) {
        int n=s.size()-1;
        // if(s.size()%2==1)
        //     return false;
        vector<int>v(s.size(),0);
        check(s,v);
        if(v[n]%(v.size()-v[n])==0&&v[n]!=0)
            return true;
        else
            return false;
    }
};
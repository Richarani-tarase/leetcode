class Solution {
public:
    void prefix(string m,vector<int>& v)
    {
        int i=0,j=1;
        v[0]=0;
        while(j<m.size())
        {
            if(m[i]==m[j])
            {
                
                v[j]=i+1;
                i++;
                j++;
            }
            else
            {
                if(i==0)
                    j++;
                else
                    i=v[i-1];
             }
        }
    }
    bool match(string s,string a,vector<int>v)
    {
        if(s.size()<a.size())
            return false;
        int i=0,j=0;
        while(i<s.size()&&j<a.size())
        {
            if(a[j]==s[i])
            {
                i++;
                j++;
            }
            else
            {
                if(j==0)
                    i++;
                else
                    j=v[j-1];
            }
        }
        if(j==a.size())
            return true;
        else return false;
    }
    int repeatedStringMatch(string a, string m) {
    string s=a;
    int n=m.size();
    int c=1;
    if(s==m)
        return 1;
    vector<int> v(n,0);
    prefix(m,v);
    while(s.size()<m.size())
    {
        s+=a;
        c++;
    }
        if(match(s,m,v)==true)
            return c;
        if(match(s+a,m,v)==true)
            return c+1;
    return -1;
    }
};
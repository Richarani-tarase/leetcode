class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')
            {
                c.push(s[i]);
            }   
            else if(!c.empty())
            {
                char a=c.top();
                if((s[i]=='}'&&a!='{') || (s[i]==')'&& a!='(') ||(s[i]==']'&& a!='['))
                {
                    return false;
                }
                c.pop();
            }
            else
            {
                return false;
            }
        }
        if(!c.empty())
        {
            return false;
        }
        return true;
    }
};
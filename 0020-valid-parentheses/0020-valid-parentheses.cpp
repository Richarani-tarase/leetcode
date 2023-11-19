class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        int j=0;
        if(s[0]==')' || s[0]=='}' || s[0]==']')
            return false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')
            {
                c.push(s[i]);
            }   
            else if(c.size())
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
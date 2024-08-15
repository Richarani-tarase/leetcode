class Solution {
public:
    string reverseWords(string s) {
        stack<char>st;
        string ans="";
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                st.push(s[i]);
            }
            if(s[i]==' '&&!st.empty())
            {
                while(!st.empty())
                {
                    char a=st.top();
                    st.pop();
                    ans=a+ans;
                }
                ans=' '+ans;
            }
        }
         while(!st.empty())
        {
            char a=st.top();
            st.pop();
            ans=a+ans;
         }
        reverse(ans.begin(),ans.end());
        if(ans[ans.size()-1]==' ')
        {
            ans.resize(ans.size()-1);
        }
        return ans;
    }
};
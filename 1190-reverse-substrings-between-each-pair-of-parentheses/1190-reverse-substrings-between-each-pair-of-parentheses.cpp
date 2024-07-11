class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        string ans="";
        st.push(s[0]);
        int i=1;
        while(i<s.size())
        {
            if(s[i]!=')')
            {
                st.push(s[i]);
            }
            else
            {
                string str="";
                while(st.top()!='(')
                {
                    str+=st.top();
                    st.pop();
                }
                st.pop();
                int j=0;
                while(j<str.size())
                {
                    st.push(str[j]);
                    j++;
                }
            }
            i++;
        }
        while(st.size()>0)
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
              return ans;
    }
};
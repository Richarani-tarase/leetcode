class Solution {
public:
    int maximumGain(string s, int x, int y) {
        string str=s;
        stack<char>st,st1;
        int i=0,c=0;
        if(x>y){
            while(i<s.size()){
                if(!st.empty()){
                    if(st.top()=='a'&&s[i]=='b'){
                        st.pop();
                        c+=x;
                    }
                    else
                        st.push(s[i]);
                }
                else
                    st.push(s[i]);
                i++;
            }
            while(!st.empty()){
                char ch=st.top();
                if(!st1.empty()){
                    if(st1.top()=='a'&&ch=='b'){
                        st1.pop();
                        c+=y;
                    }
                    else
                        st1.push(ch);
                }
                else
                    st1.push(ch);
                st.pop();
            }
        }
        else
        {
            while(i<s.size()){
                if(!st.empty()){
                    if(st.top()=='b'&&s[i]=='a'){
                        st.pop();
                        c+=y;
                    }
                    else
                        st.push(s[i]);
                }
                else
                    st.push(s[i]);
                i++;
            }
            while(!st.empty()){
                char ch=st.top();
                if(!st1.empty()){
                    if(st1.top()=='b'&&ch=='a'){
                        st1.pop();
                        c+=x;
                    }
                    else
                        st1.push(ch);
                }
                else
                    st1.push(ch);
                st.pop();
            }   
        }
        return c;
    }
};

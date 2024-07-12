// class Solution {
// public:
//     int maximumGain(string s, int x, int y) {
//         string str=s;
//         stack<char>st,st1;
//         int i=0,c=0;
//         if(x>y){
//             while(i<s.size()){
//                 if(!st.empty()){
//                     if(st.top()=='a'&&s[i]=='b'){
//                         st.pop();
//                         c+=x;
//                     }
//                     else
//                         st.push(s[i]);
//                 }
//                 else
//                     st.push(s[i]);
//                 i++;
//             }
//             while(!st.empty()){
//                 char c=st.top();
//                 if(!st1.empty()){
//                     if(st1.top()=='a'&&c=='b'){
//                         st1.pop();
//                         c+=y;
//                     }
//                     else
//                         st1.push(c);
//                 }
//                 else
//                     st1.push(c);
//                 st.pop();
//             }
//         }
//         else
//         {
//             while(i<s.size()){
//                 if(!st.empty()){
//                     if(st.top()=='b'&&s[i]=='a'){
//                         st.pop();
//                         c+=y;
//                     }
//                     else
//                         st.push(s[i]);
//                 }
//                 else
//                     st.push(s[i]);
//                 i++;
//             }
//             while(!st.empty()){
//                 char c=st.top();
//                 if(!st1.empty()){
//                     if(st1.top()=='b'&&c=='a'){
//                         st1.pop();
//                         c+=x;
//                     }
//                     else
//                         st1.push(c);
//                 }
//                 else
//                     st1.push(c);
//                 st.pop();
//             }   
//         }
//         return c;
//     }
// };
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st1, st2;
        int ans = 0;
        
        if(x > y) {
            for(auto c: s) {
                if(!st1.empty()) {
                    if(st1.top() == 'a' && c == 'b') {
                        st1.pop();
                        ans += x;
                    }
                    else {
                        st1.push(c);
                    }
                }
                else {
                    st1.push(c);
                }
            }
            
            while(!st1.empty()) {
                char c = st1.top();
                if(!st2.empty()) {
                    if(st2.top() == 'a' && c == 'b') {
                        st2.pop();
                        ans += y;
                    }
                    else {
                        st2.push(c);
                    }
                }
                else {
                    st2.push(c);
                }
                st1.pop();
            }
        } 
        else {
            for(auto c: s) {
                if(!st1.empty()) {
                    if(st1.top() == 'b' && c == 'a') {
                        st1.pop();
                        ans += y;
                    }
                    else {
                        st1.push(c);
                    }
                }
                else {
                    st1.push(c);
                }
            }
            
            while(!st1.empty()) {
                char c = st1.top();
                if(!st2.empty()) {
                    if(st2.top() == 'b' && c == 'a') {
                        st2.pop();
                        ans += x;
                    }
                    else {
                        st2.push(c);
                    }
                }
                else {
                    st2.push(c);
                }
                st1.pop();
            }
        }
        
        return ans;
    }
};
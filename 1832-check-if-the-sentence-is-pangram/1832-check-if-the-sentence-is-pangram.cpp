class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> ans(26,0);
       int a;
       int count=0;
       for(int i=0;i<sentence.size();i++){
           a=sentence[i]-'a';
           ans[a]=1;
       }
       for(int i=0;i<26;i++){
           if(ans[i]!=1){
               return 0;
           }
       }
       return 1;
    }
};
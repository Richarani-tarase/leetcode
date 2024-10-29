class Solution {
public:
    int minInsertions(string s) {
        string temp=s;
        reverse(temp.begin(),temp.end());
        vector<int>pre(s.size()+1);
        vector<int>cur(s.size()+1);
        for(int i=1;i<=s.size();i++){
            for(int j=1;j<=s.size();j++){
                if(s[i-1]==temp[j-1]){
                    cur[j]=1+pre[j-1];
                }
                else{
                    cur[j]=max(pre[j],cur[j-1]);
                }
            }
            pre=cur;
        }
        return s.size()-cur[s.size()];
    }
};
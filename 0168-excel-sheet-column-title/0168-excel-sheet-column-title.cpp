class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n=columnNumber;
        string ans="";
        while(n>0)
        {
            n=n-1;
            int a=n%26;
            ans+=char('A'+a);
            n=n/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
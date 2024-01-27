class Solution {
public:
    // string largestOddNumber(string num)
    // {
        // string max;
        // int c=0;
        // for(int i=num.size()-1;i>=0;i--)
        // {
        //     if(num[i]%2==0)
        //     {
        //         c++;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        // for(int i=0;i<num.size()-c;i++)
        // {
        //     max+=num[i];
        // }
        // return max;
        string copy(string num,int n){
        string ans="";
        for(int i=0;i<=n;i++){
            ans+=num[i];
        }
        return ans;
    }
    string largestOddNumber(string num) {
       string maxi="";
       int n=num.size();
       for(int i=num.size();i>=0;i--){
        char c=num[i];
        if(c=='1' ||c=='3' ||c=='5' ||c=='7' ||c=='9'){
            maxi=copy(num,i);
            break;
        }
       }
       return maxi;
    }
};
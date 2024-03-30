 class Solution {
public:
    vector<int> findLonely(vector<int>& a) {
        vector<int> ans;
        int count;
        int n=a.size();
        if(n<=1){
            return a;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            count=0;
            if(i==0){
                if((a[i]==a[i+1]) || (a[i]+1==a[i+1])){
                    count=1;
                }
            }
            else if(i==n-1){
                if((a[i]==a[i-1]) || (a[i]-1==a[i-1])){
                    count=1;
                }
            }
            else{
                if((a[i]==a[i+1]) || (a[i] ==a[i-1]) || (a[i]+1==a[i+1]) || (a[i]-1==a[i-1]))  {
                    count=1;
                }          }
            if(count==0){
                ans.push_back(a[i]);
            }
        }
        return ans;

     
    }
};
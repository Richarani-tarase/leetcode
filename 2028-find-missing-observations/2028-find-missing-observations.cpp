class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int Sum = 0;
        for(int i=0;i<rolls.size();i++) 
        {
            Sum+=rolls[i];
        }
        int m=rolls.size();
        int totalLength = n+m;
        int sum = mean*totalLength-Sum;
        if(n*6 < sum || sum<n) return {};
        int r = sum % n;
        int q   = sum / n;
        vector<int> ans(n,q);
        for(int i=1; i<=r; i++)
            ans[i]++;
        return ans;
    }
};
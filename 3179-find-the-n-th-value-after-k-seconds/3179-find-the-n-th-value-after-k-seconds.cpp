class Solution {
public:
    const int mod=1000000007;
    int valueAfterKSeconds(int n, int k) {
        vector<int>v(n);
        vector<int>v1(n,1);
        for(int i=0;i<k;i++)
        {
            v=v1;
            int a=1;
            for(int j=1;j<n;j++)
            {
                v1[j]=(v1[j-1]+v[j])%mod;
            }
        }
        return v1[n-1]%mod;
    }
};
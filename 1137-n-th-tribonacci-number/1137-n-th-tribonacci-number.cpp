class Solution {
public:
    int tribonacci(int n) {
        vector<long long int>v;
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        for(int i=2;i<=n;i++)
        {
            v.push_back(v[i-2]+v[i-1]+v[i]);
        }
        return v[n];
    }
};
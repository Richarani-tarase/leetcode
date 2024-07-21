class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v;
        v.push_back({1});
        
        for (int i = 1; i <= rowIndex; ++i) {
            vector<int> a(i + 1, 1); // Initialize the row with 1s
            for (int j = 1; j < i; ++j) {
                a[j] = v[i - 1][j - 1] + v[i - 1][j];
            }
            v.push_back(a);
        }
        
        return v[rowIndex];
    }
};

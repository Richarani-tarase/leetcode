class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int a=original.size();
        vector<vector<int>> arr;
        if(m*n!=a)
        {
            return arr;
        }
            int index=0;
        for(int i=0;i<m&&index<original.size();i++)
        {
            vector<int>arr2;
            for(int k=0;k<n;k++)
            {
                arr2.push_back(original[index]);
                index++;
            }
             arr.push_back(arr2);
        }
        return arr;
    }
};
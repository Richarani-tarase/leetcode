class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            int max=-1;
            for(int j=i+1;j<arr.size();j++)
            {
                if(max<arr[j])
                {
                    max=arr[j];
                }
            }
            arr[i]=max;
        }
        return arr;
    }
};
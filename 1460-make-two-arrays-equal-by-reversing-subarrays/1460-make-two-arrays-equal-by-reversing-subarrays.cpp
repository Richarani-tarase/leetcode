class Solution {
public:
    void rev(vector<int>& arr,int i,int j)
    {
        while(i<=j)
        {
            swap(arr[i],arr[j]);
            i++,j--;
        }
    }
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n=target.size(),m=arr.size();
        if(n==m)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=i;j<m;j++)
                {
                    if(arr[j]==target[i])
                    {
                        rev(arr,i,j);
                        break;
                    }
                }
            }
        }
        if(target==arr)
        {
            return true;
        }
        return false;
    }
};
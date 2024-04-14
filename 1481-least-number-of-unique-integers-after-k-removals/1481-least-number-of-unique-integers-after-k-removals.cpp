class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        for(auto x:arr)
        {
            m[x]++;
        }
        vector<int>v;
        for(auto i:m)
            v.push_back(i.second);
        sort(v.begin(),v.end());
        int size=m.size();
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<=k){
                k=k-v[i];
                size--;
            }
            else
            break;
        }
        return size;
    }
};
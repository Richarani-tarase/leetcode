class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        map<char,int>m;
        for(auto i:word)
        {
            m[i]++;
        }
        vector<int>arr;
        for(auto i:m)
        {
            arr.push_back(i.second);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int c=0,a=0;
        for(int i=0;i<arr.size();i++)
        {
            if(i%8==0)
                a++;
            ans+=(a*arr[i]);
        }
        return ans;
    }
};
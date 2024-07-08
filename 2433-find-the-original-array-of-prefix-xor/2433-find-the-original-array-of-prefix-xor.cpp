class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>arr=pref;
        for(int i=1;i<pref.size();i++)
        {
            pref[i]=arr[i-1]^pref[i];
        }
        return pref;
    }
};
class Solution {
public:
    static bool custom(int a,int b){
        if( __builtin_popcount(a)==__builtin_popcount(b))
            return a<b;
        return __builtin_popcount(a)<__builtin_popcount(b);
    }
    vector<int> sortByBits(vector<int>& a) {
        vector<int>arr=a;
        sort(arr.begin(),arr.end(),custom);
        return arr;
    }
};
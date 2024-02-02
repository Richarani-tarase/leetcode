class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        int sum=0,rem=0;
        while(num!=0)
        {
            v.push_back(num%10);
            num=num/10;
        }
        sort(v.begin(),v.end());
        int s1=(v[0]*10+v[2]);
            int s2=v[1]*10+v[3];
            sum=s1+s2;
        return sum;
    }
};
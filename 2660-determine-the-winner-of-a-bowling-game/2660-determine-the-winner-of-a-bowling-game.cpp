class Solution {
public:
    int check(vector<int> a)
    {
        if(a.size()==1)
        {
            return a[0];
        }
        int ans=a[0];
        if(a[0]==10)
        {
            ans+=a[1]*2;
        }
        else
        {
            ans+=a[1];
        }
        for(int i=2;i<a.size();i++)
        {
            if(a[i-1]==10||a[i-2]==10)
            {
                ans=ans+(a[i]*2);
            }
            else
                ans+=a[i];
        }
        return ans;
    }
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int a=check(p1);
        int b=check(p2);
        if(a==b)
        {
            return 0;
        }
        else if(a<b)
        {
            return 2;
        }
        return 1;
    }
};
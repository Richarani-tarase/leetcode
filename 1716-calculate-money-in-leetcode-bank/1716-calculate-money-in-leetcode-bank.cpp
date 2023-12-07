class Solution {
public:
    int totalMoney(int n) {
        int sum=0,a=0,i,j;
        for(i=1;i<=n;i++)
        {
            int c=0;
            for(j=i;j<=6+i;j++)
            {
                sum=sum+j;
                c++;
                a++;
                if(a==n)
                return sum;
                if(c==7)
                break;
            }
        }
        return sum;
    }
};
class Solution{
public:
    int numberOfChild(int n, int k) {
        int d=0,i=0,j=1;
        while(j<=k)
        {
            if(i<n-1&&d==0)
            {
                i++;
                if(i==n-1)
                    d=1;
            }
            else if(i>0&&d==1)
            {
                i--;
                if(i==0)
                {
                    d=0;
                }
            }
            j++;
        }
        return i;
    }
};
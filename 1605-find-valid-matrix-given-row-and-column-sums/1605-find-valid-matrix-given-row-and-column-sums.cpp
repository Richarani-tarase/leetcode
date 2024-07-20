class Solution {
public:
    // int find_min(vector<int> v)
    // {
    //     int n=v.size();
    //     int min=-1;
    //     int minele=INT_MAX;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(v[i]>-1 && v[i]<minele)
    //         {
    //             minele=v[i];
    //             min=i;
    //         }
    //     }
    //     return min;
    // }
    // bool check(const vector<int>& ve) {
    //     for (int val : ve) {
    //         if (val > -1) {
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    vector<vector<int>> restoreMatrix(vector<int>& r, vector<int>& c) {
        int n=r.size();
        int m=c.size();
        vector<vector<int>>v(n,vector<int>(m,0));
        // while(check(r))
        // {
        //     int a=find_min(r);
        //     int b=find_min(c);
        //     if (a == -1 || b == -1) {
        //         break;
        //     }
        //     if(r[a]<c[b])
        //     {
        //         v[a][b]=r[a];
        //         c[b]-=r[a];
        //         r[a]=-1;
        //     }
        //     else
        //     {
        //         v[a][b]=c[b];
        //         r[a]-=c[b];
        //         c[b]=-1;
        //     }
        // }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                v[i][j]=min(r[i],c[j]);
                r[i]-=v[i][j];
                c[j]-=v[i][j];
            }
        }
          return v;  
    }
};
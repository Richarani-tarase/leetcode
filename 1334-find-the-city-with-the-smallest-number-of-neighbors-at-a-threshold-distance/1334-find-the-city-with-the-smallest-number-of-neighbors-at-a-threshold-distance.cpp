class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
       vector<vector<int>>v(n,vector<int>(n,INT_MAX));
       for (int i = 0; i < n; ++i) {
            v[i][i] = 0; 
        }
       for(auto i:edges){
        int u=i[0];
        int u2=i[1];
        int w=i[2];
        v[u][u2]=w;
        v[u2][u]=w;
       } 
       
        
       for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(v[j][i]!=INT_MAX && v[i][k]!=INT_MAX){
                    v[j][k]=min(v[j][k],v[j][i]+v[i][k]);
                
                }
               
            }
         }
       }
       int maxans=INT_MAX;
       int result=-1;
       for(int i=0;i<n;i++){
        int ans=0;
        for(int j=0;j<n;j++){
            if(v[i][j]<=distanceThreshold){
                ans++;
            }
        }
        
        if(ans<=maxans){
            maxans=ans;
            result=i;
        }
       }
       return result;
    }
};
 
    
      
      
        
       
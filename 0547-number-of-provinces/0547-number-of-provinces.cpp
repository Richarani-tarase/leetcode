class Solution {
public:
    void dfs(vector<int>adj[],int i,vector<int>&vis)
    {
        vis[i]=1;
        for(auto j:adj[i])
        {
            if(!vis[j])
                dfs(adj,j,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]!=0)
                {
                    adj[i].push_back(j);
                }
            }
        }
        int c=0;
        vector<int>vis(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {            
                c++;
                dfs(adj,i,vis);
            }
        }
        return c;
    }
};
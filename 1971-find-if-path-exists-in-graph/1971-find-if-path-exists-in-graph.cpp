class Solution {
public:
    bool dfs(vector<int>adj[],int source, int destination,vector<int>&v)
    {
        if(source==destination)
            return true;
        if(v[source])
            return false;
        v[source]=1;
        for(auto it:adj[source])
        {
              if(dfs(adj,it,destination,v))
                  return true;
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>adj[n];
        for(auto i:edges)
        {
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>v(n,0);
        return dfs(adj,source,destination,v);
    }
};
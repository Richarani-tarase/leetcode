class Solution {
public:
    bool dfs(vector<vector<int>>adj,vector<int>&vis,int i,int pc)
    {
        vis[i]=pc;
        for(auto node:adj[i])
        {
            if(vis[node]==-1)
            {
                if(!dfs(adj,vis,node,!pc))return false;
            }
            else if(pc==vis[node])
            {
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size(),m=graph[0].size();
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            if(graph[i].size()>1){
                adj[graph[i][0]].push_back(graph[i][1]);
                adj[graph[i][1]].push_back(graph[i][0]);
            }
        }
        vector<int>vis(n,-1);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                if(!dfs(graph,vis,i,0))
                    return false;
            }
        }
        return true;
    }
};
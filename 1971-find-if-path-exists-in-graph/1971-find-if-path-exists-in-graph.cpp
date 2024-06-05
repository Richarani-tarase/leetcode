class Solution {
public:
    bool bfs(vector<int>adj[],vector<int>&v,int source, int destination)
    {
        queue<int>q;
        q.push(source);
        v[source]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            if(node==destination)
                return true;
            for(int i : adj[node])
            {
                if(v[i]==0)
                {
                    v[i]=1;
                    q.push(i);
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>v(n,0);
        vector<int>adj[n];
        for(auto it:edges)
        {
            int u=it[0];
            int v=it[1];
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        return bfs(adj,v,source,destination);
    }
};
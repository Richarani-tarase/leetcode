class Solution {
public:
    bool dfs(vector<int>adj[],vector<int>&vis,int i,vector<int>&ans,vector<int>&path)
    {
        vis[i]=1;
        path[i]=1;
        for(auto node:adj[i])
        {
            if(!vis[node])
            {
                if(!dfs(adj,vis,node,ans,path))return false;
            }
            else if(path[node]==1)
            {
                return false;
            }
        }
        path[i]=0;
        ans.push_back(i);
        return true;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int>vis(numCourses,0);
        vector<int>path(numCourses,0);
        vector<int>ans;
        for(int i=0;i<numCourses;i++)
        {
            if(!vis[i])
            if(!dfs(adj,vis,i,ans,path))return{};
        }
        // queue<int>q;
        // q.push(0);
        // vector<int>v(numCourses,0);
        // v[0]=1;
        // while(!q.empty())
        // {
        //     int n=q.front();
        //     q.pop();
        //     ans.push_back(n);
        //     for(auto i:adj[n])
        //     {
        //         if(!v[i]){
        //             v[i]=1;
        //             q.push(i);
        //         }
        //     }
        // }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
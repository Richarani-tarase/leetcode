class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int>adj[n];
        vector<int>indegree(n,0);
         for(int i=0;i<prerequisites.size();i++)
         {
             if(prerequisites[i].size()>1)
             {
                 adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
                 indegree[prerequisites[i][0]]++;
                 
             }
         }
        queue<int>q;
        for(int i=0;i<indegree.size();i++)
        {
            if(indegree[i]==0)
            {
               q.push(i); 
            }
        }
        vector<int>ans;
        while(!q.empty())
        {
            int n=q.front();
            q.pop();
            ans.push_back(n);
            for(int i:adj[n])
            {
                indegree[i]--;
                if(indegree[i]==0)
                {
                    q.push(i);
                }
            }
        }
        return ans.size()==n;
    }
};
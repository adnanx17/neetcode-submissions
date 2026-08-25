class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indeg(numCourses,0);
        vector<int>ans;
        for(auto&edge:prerequisites){
            int u=edge[0];
            int v=edge[1];
            adj[v].push_back(u);
            indeg[u]++;
        }

        queue<int>q;
        for(int i=0; i<numCourses; i++){
            if(!indeg[i]){
                q.push(i);
            }
        }
        int count=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(int i=0; i<adj[node].size(); i++){
                indeg[adj[node][i]]--;
                if(!indeg[adj[node][i]]){
                    q.push(adj[node][i]);
                }
            }
    
        }

        if(ans.size()==numCourses){
            return ans;
        }
        vector<int>empty;
        return empty;
    }
};

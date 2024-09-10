class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indeg(numCourses,0);
        for(auto it: prerequisites){
            int a = it[0];
            int b = it[1];
            adj[b].push_back(a);
            indeg[a]++;
        }
        vector<int> res;
        queue<int> q;
        for(int i = 0 ; i < numCourses ; i ++){
            if(indeg[i] == 0){
                res.push_back(i);
                q.push(i);
            }
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it: adj[node]){
                indeg[it]--;
                if(indeg[it] == 0){
                    res.push_back(it);
                    q.push(it);
                }
            }
        }
        if(res.size() != numCourses) return {};
        return res;

    }
};
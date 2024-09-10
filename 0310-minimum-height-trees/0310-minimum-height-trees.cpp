class Solution {
public:
    vector<vector<int>> adj;
    // int dfs(int node,vector<int>& vis){
    //     int res = 0;
    //     vis[node] = 1;
    //     for(auto it: adj[node]){
    //         if(vis[it] != 1){
    //             res = max(res,1 + dfs(it,vis)); 
    //         }
    //     }
    //     return res;
    // }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n == 1) return {0};
        adj.resize(n);
        vector<int> indeg(n,0);
        for(auto it: edges){
            int a = it[0];
            int b = it[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
            indeg[a]++;
            indeg[b]++;
        }
        vector<int> leaves;

        for(int i = 0 ; i < n ; i ++){
            if(indeg[i] == 1) {
                leaves.push_back(i);
            }
        }
        int remainingNode = n;
        while(remainingNode > 2){
            int lfsize = leaves.size();
            remainingNode -= leaves.size();
            vector<int> newLeaves;
            for(int i = 0 ; i < lfsize; i++){
                for(auto it: adj[leaves[i]]){
                    indeg[it]--;
                    if(indeg[it] == 1){
                        newLeaves.push_back(it);
                    }
                }
            }
            leaves = newLeaves;
        }
        return leaves;
    }
};
#define prs pair<int,pair<int,int>> 
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto it: flights){
            int strt = it[0];
            int end = it[1];
            int cost = it[2];
            adj[strt].push_back({cost,end});
        }
        priority_queue<prs,vector<prs>,greater<prs>> pq;
        vector<int> dest(n,INT_MAX - 1);
        dest[src] = 0;
        pq.push({0,{0,src}});//(stops , cost ,node)
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int node = it.second.second;
            int stop = it.first;
            int currCost = it.second.first;
            if(stop > k){
                continue;
            }
            for(auto it: adj[node]){
                int adjNode = it.second;
                int newCost = it.first;
                if(newCost + currCost < dest[adjNode]){
                    dest[adjNode] = newCost + currCost;
                    pq.push({stop + 1, { dest[adjNode] , adjNode}});
                }
            }
        }
        if(dest[dst] == INT_MAX - 1) return -1;
        return dest[dst];
    }
};
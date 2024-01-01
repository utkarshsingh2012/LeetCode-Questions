class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int res = 0;
        vector<int> vec(n);
        vec[0] = INT_MAX;
        for(int i = 1; i<n; i++){
            vec[i] = min(vec[i-1], prices[i-1]);
        }
        
        for(int i = 0; i<n; i++){
            if(vec[i] == INT_MIN)   continue;
            else{
                res = max(res, prices[i] - vec[i]);
            }
        }
        
        return res;
    }
};
class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int n = nums.size(), m = nums[0].size();
       vector<pair<int, int>> mp;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(nums[i][j] == 0){
                    mp.push_back({i,j});
                }
            }
        }
        
        for(auto it: mp){
            int f = it.first, s = it.second;
            for(int i = 0; i<n; i++){
                nums[i][s] = 0;
            }
            for(int j = 0; j<m; j++){
                nums[f][j] = 0;
            }
        }
    }
};
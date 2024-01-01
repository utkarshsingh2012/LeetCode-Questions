class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            mp.insert(nums[i]);
        }
        int res = 0;
        for(auto it: mp){
            int count = 1;
            if(mp.find(it-1) == mp.end()){
                while(mp.find(it+count)!= mp.end() ){
                    count++;
                    
                }
                res = max(res, count);
            }
        }
        return res;
    }
};
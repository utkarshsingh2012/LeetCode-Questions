class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> vec;
        unordered_map<int, int> check;
        for(int i = 0; i<n; i++){
          if(check.find(target - nums[i]) != check.end()){
            vec.push_back(check[target-nums[i]]);
            vec.push_back(i);
          }
          else{
            check.insert({nums[i], i});
          }
        }

        return vec;
    }
};
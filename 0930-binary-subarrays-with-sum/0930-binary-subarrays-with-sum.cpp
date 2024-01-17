class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0, count = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            // if(sum == goal) count++;
            if(mp.find(sum - goal) != mp.end()){
                count += mp[sum-goal];
                mp[sum]++;
            }
            else if(mp.find(sum - goal) == mp.end()){
                mp[sum]++;
            }
        }
        return count;
    }
};
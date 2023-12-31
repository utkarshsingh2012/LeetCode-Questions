class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xOR = 0, n = nums.size();
        for(int i = 0; i<n; i++){
            xOR = xOR ^nums[i];
        }
        return xOR;
    }
};
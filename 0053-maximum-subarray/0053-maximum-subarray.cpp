class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> sum(n);
        sum[0] = nums[0];
        int mx = sum[0];
        for(int i = 1; i<n; i++){
            if(sum[i-1] < 0){
                sum[i] = nums[i];
            }
            else{
                sum[i] = max(sum[i-1]+nums[i], nums[i]);
            }
            mx = max(mx, sum[i]);
        }
        return mx;
    }
};
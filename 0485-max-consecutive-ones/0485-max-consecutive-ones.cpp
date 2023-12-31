class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        int res = 0, sum = 0;
        while( j < n){
            sum = sum + nums[j];
            if(sum < j-i+1){
                sum = sum - nums[i];
                i++;
                j++;
            }
            else if(sum == j-i+1){
                res = max(res, j-i+1);
                j++;
            }
        }
        return res;
    }
};
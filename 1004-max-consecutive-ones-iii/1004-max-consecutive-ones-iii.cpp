class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix[n];
        prefix[0] = nums[0];
        for(int i = 1; i<n; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        int res = 0;
        int i = 0, j = 0;
        while(i<n && j<n){
            int sum = 0;
            if(i == 0){
                sum = prefix[j];
            }
            else{
                sum = prefix[j] - prefix[i-1];
            }
            
            if(sum >= j-i+1-k){
                res = max(res, j-i+1);
                j++;
            }
            else{
                i++;
            }
        }
        return res;
    }
};
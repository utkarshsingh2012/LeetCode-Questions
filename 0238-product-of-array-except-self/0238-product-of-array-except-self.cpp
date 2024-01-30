class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // prefix product -> 1,2,6,24
        // suffix product -> 24,24,12,4
        int n = nums.size();
        int prefix[n], suffix[n];
        prefix[0] = 1;
        suffix[n-1] = 1;
        for(int i = 1; i<n; i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }
        for(int i = n-2; i>=0; i--){
            suffix[i] = suffix[i+1]*nums[i+1];
        }
        vector<int> vec;
        for(int i = 0; i<n; i++){
            vec.push_back(prefix[i]*suffix[i]);
        }
        return vec;
    }
};
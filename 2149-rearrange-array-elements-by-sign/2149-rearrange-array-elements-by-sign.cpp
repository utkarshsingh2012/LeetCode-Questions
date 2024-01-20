class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(n);
        int i = 0, j = 1;
        for(int k = 0; k<n; k++){
          if(nums[k] >= 0){
            vec[i] = nums[k];
            i = i+2;
          }
          else{
            vec[j] = nums[k];
            j = j+2;
          }
        } 
        return vec;
    }
};
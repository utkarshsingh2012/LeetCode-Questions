class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size(), count = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                ans.push_back(nums[i]);
            }
            else{
                count++;
            }
        }
        
        while(count !=0 ){
            ans.push_back(0);
            count--;
        }
        nums = ans;
    }
};
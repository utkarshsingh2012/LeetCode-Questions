class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        while( i < n && j < n){
            if(nums[i] != 0){
                i++;
                j = i;
            }
            else{
                while(nums[j] == 0){
                    if(j == n-1) return;
                    j++;
                }
                swap(nums[i], nums[j]);
                i++;
                j = i;
            }
        }
    }
};
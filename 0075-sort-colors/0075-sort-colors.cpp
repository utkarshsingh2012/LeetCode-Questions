class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int n0 = 0, n1 = 0, n2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                n0++;
            }
            else if(nums[i] == 1){
                n1++;
            }
            else if(nums[i] == 2){
                n2++;
            }
        }
        for(int i = 0; i<n; i++){
            if(i < n0){
                nums[i] = 0;
            }
            else if(i < n0+n1){
                nums[i] = 1;
            }
            else{
                nums[i]= 2;
            }
        }
    }
};
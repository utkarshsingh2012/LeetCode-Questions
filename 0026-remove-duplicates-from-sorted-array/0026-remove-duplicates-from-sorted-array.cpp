class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        while(i < n-1 && j < n){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                swap(nums[i+1], nums[j]);
                i++;
                j++;
            }
            
        }
        int ans = i;
        return i+1;
        
    }
};
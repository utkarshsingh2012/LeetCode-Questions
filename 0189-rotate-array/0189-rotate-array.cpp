class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        rev(nums, 0, n-k-1);
        rev(nums, n-k, n-1);
        rev(nums, 0, n-1);
    }
    void rev(vector<int> &nums, int low, int high){
        while(low <= high){
            swap(nums[low], nums[high]);
            low++;
            high--;
        }
    }
};
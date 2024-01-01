class Solution {
private: 
    int firstOcc(vector<int>& nums, int target){
        int n = nums.size(), start = 0, end = n-1;
        int res = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] == target){
                res = mid;
                end = mid-1;
            }
            else if(nums[mid] > target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return res;
    }
     int lastOcc(vector<int>& nums, int target){
        int n = nums.size(), start = 0, end = n-1;
        int res = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] == target){
                res = mid;
                start = mid+1;
            }
            else if(nums[mid] > target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return res;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f = firstOcc(nums, target);
        int l = lastOcc(nums, target);
        return {f,l};
    }
};
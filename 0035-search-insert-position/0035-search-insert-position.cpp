class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(target > nums[n-1])  return n;
        if(target < nums[0])    return 0;
        int start = 0, end = n-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(mid > 0 && mid < n-1){
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] > target){
                    if(nums[mid-1] < target){
                        return mid;
                    }
                    else{
                        end = mid-1;
                    }
                }
                else{
                    start = mid+1;
                }
            }
            else if(mid == 0){
                if(nums[0] >= target)   return 0;
                else{
                    start = mid+1;
                }
            }
            else if(mid == n-1){
                if(target == nums[n-1]) return n-1;
                else if(target < nums[n-1]) {
                    if(target> nums[mid-1]){
                        return mid;
                    }
                    else{
                        end = mid-1;
                    }
                }
            }
            
        }
        return 0;
    }
};
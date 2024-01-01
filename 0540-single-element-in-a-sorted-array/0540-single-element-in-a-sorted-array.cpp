class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int n = nums.size();
        // if(n == 1)  return nums[0];
        // int start = 0, end = n-1;
        // while(start <= end){
        //     int mid = start + (end-start)/2;
        //     if(mid > 0 && mid > n-1){
        //         if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
        //             return nums[mid];
        //         }
        //         else if(nums[mid] == nums[mid+1]){
        //             if((end - mid) % 2 == 0){
        //                 start = mid+1;
        //             }
        //             else{
        //                 end = mid-1;
        //             }
        //         }
        //         else if(nums[mid] == nums[mid-1]){
        //             if((mid - 1 - start) % 2 == 0){
        //                 end = mid-1;
        //             }
        //             else {
        //                 start = mid+1;
        //             }
        //         }
        //     }
        //     else if(mid == 0){
        //         if(nums[mid+1] != nums[mid]){
        //             return nums[mid];
        //         }
        //         else{
        //             start = mid+1;
        //         }
        //     }
        //     else if(mid == n-1){
        //         if(nums[mid-1] != nums[mid]){
        //             return nums[mid];
        //         }
        //         else{
        //             end = mid-1;
        //         }
        //     }
        // }
        // return 0;
        int x = 0;
        for(int i = 0; i<nums.size(); i++){
            x = x^nums[i];
        }
        return x;
    }
};
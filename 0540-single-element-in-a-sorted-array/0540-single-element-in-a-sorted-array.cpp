class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1;
        if(n == 1)  return nums[0];
        
        while(start <= end){
            int mid = start + (end-start)/2;
            if(mid != 0 && mid != n-1){
                if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]){
                    return nums[mid];
                }
                else if(nums[mid] == nums[mid-1]){
                    if((end-mid+1)%2 == 0){
                        start = mid+1;
                    }
                    else{
                        end = mid-2;
                    }
                }
                else{
                    if((mid-start+1) %2 == 0){
                        end = mid-1;
                    }
                    else{
                        start = mid+2;
                    }
                }
            }
            else if(mid == 0){
                if(nums[0] != nums[1])  return nums[0];
            }
            else if(mid == n-1){
                if(nums[n-2] != nums[n-1]){
                    return nums[n-1];
                }
            }
        }
        return -1;
    }
};
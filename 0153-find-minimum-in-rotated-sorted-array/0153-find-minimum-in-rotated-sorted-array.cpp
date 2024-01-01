class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end= nums.size()-1;
        while(start <= end){
          int mid = start + (end - start)/2;
          int next = (mid + 1)%nums.size();
          int prev = (mid + nums.size() - 1)%nums.size();
          if(nums[mid] < nums[prev]){
            return nums[mid];
          }
          else if(nums[mid] <= nums[end]){
            end = mid-1;
          }
          else{
            start = mid+1;
          }
        }

        return nums[0];
    }
};
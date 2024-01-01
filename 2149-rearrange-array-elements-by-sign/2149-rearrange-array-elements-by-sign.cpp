class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos, neg, ans;
        for(int i = 0; i<n; i++){
            if(nums[i] <= 0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int p = 0, ne = 0;
        for(int i = 0; i<n; i++){
            if(i%2 != 0){
                ans.push_back(pos[p]);
                p++;
            }
            else{
                
                ans.push_back(neg[ne]);
                ne++;
            }
        }
        return ans;
    }
};
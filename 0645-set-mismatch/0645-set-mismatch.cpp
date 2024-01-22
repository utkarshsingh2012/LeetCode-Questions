class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        vector<int> vec;
        for(int i = 0; i<n; i++){
          if(st.find(nums[i])!= st.end()){
            vec.push_back(nums[i]);
            
          }
          st.insert(nums[i]);
        }
        for(int i = 1; i<=n; i++){
          if(st.find(i) == st.end()){
            vec.push_back(i);
          }
        }
        return vec;

    }
};
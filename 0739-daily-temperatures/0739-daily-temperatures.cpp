class Solution {
private:
    vector<int> ngR(vector<int> &nums){
        int n = nums.size();
        vector<int> vec;
        stack<int> st;
        stack<int> index;
        for(int i = n-1; i>=0; i--){
            if(st.empty()){
                vec.push_back(0);
            }
            else if(st.top() > nums[i]){
                vec.push_back(index.top());
            }
            else{
                while(!st.empty() && st.top() <= nums[i]){
                    st.pop();
                    index.pop();
                }
                if(st.empty()){
                    vec.push_back(0);
                }
                else{
                    vec.push_back(index.top());
                }
            }
            st.push(nums[i]);
            index.push(i);
        }
        reverse(vec.begin(), vec.end());
        return vec;
    }
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        vector<int> ans, res;
        ans = ngR(nums);
        for(int i = 0; i<ans.size(); i++){
          if(ans[i] == 0){
            res.push_back(0);
          }
          else{
            res.push_back(ans[i] - i);
          }
        }
        return res;
    }
};
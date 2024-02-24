class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        int n = nums2.size();
        stack<int> st;
        for(int i = n-1; i>=0 ; i--){
            if(st.empty()){
                vec.push_back(-1);
            }
            else if(st.top() > nums2[i]){
                vec.push_back(st.top());
            }
            else{
                while(!st.empty() && st.top() <= nums2[i]){
                    st.pop();
                }
                if(st.empty()){
                    vec.push_back(-1);
                }
                else{
                    vec.push_back(st.top());
                }
            }
            st.push(nums2[i]);
        }
        reverse(vec.begin(), vec.end());
        unordered_map<int, int> mp;
        for(int i = 0; i<n; i++){
            mp[nums2[i]] = vec[i];
        }
        vector<int> ans;
        for(int i = 0; i<nums1.size(); i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<vector<int>> ans;
        list<int> l;
        for(int i = 0; i< n; i++){
            l.push_back(nums[i]);
        }
        while(!l.empty()){
            unordered_set<int> st;
            vector<int> vec;
            int n = l.size();
            for(int i = 0; i<n; i++){
                if(st.find(l.front()) ==st.end()){
                    vec.push_back(l.front());
                    st.insert(l.front());
                    l.pop_front();
                }
                else{
                    int x = l.front();
                    l.pop_front();
                    l.push_back(x);
                    continue;
                }
            }
            ans.push_back(vec);
        }
        return ans;
    }
};
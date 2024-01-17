class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            mp[arr[i]]++;
        }
        unordered_set<int> st;
        for(auto it: mp){
            if(st.find(it.second) != st.end())  return false;
            st.insert(it.second);
        }
        return true;
    }
};
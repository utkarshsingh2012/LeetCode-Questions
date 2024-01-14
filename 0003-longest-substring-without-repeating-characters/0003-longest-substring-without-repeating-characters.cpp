class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        int n = s.length();
        unordered_set<char> st;
        int maxi = 0;
        while(i<n && j<n){
            if(st.find(s[j]) == st.end()){
                st.insert(s[j]);
                if(st.size() > maxi){
                    maxi = st.size();
                }
                j++;
                // maxi = max(st.size(), maxi);
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return maxi;
    }
};
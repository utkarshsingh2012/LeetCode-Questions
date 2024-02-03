class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> st;
        list<char> l;
        int i = 0, j = 0;
        int res = 0;
        while(j<n){
            if(st.find(s[j]) == st.end()){
                l.push_back(s[j]);
                st.insert(s[j]);
                res = max(res, j-i+1);
                j++;
            }
            else{
                while(!l.empty() && l.front() != s[j]){
                    l.pop_front();
                    st.erase(s[i]);
                    i++;
                }
                if(!l.empty() && l.front() == s[j]){
                    l.pop_front();
                    st.erase(s[i]);
                    i++;
                }
                l.push_back(s[j]);
                st.insert(s[j]);
                res = max(res, j-i+1);
                j++;
            }
        }
        return res;
    }
};
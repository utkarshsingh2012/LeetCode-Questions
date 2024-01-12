class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> st;
        st.insert({'a','e','i','o','u','A','E','I','O','U'});
        int count = 0;
        int n = s.length();
        for(int i = 0; i<n/2; i++){
            if(st.find(s[i]) != st.end()){
                count++;
            }
        }
        
        for(int i = n/2; i<n; i++){
            if(st.find(s[i]) != st.end()){
                count--;
            }
        }
        return (count == 0);
    }
};
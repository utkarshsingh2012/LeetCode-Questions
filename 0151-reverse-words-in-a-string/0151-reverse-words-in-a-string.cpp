class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stack<string> st;
        string words = "";
        for(int i = 0; i<n; i++){
            if(s[i] == ' '){
                if(words != ""){
                    st.push(words);
                    words = "";
                }
                
            }
            else{
                words += s[i];
            }
        }
        if(words != ""){
            st.push(words);
        }
        string res = "";
        while(!st.empty()){
            if(res == ""){
                res = st.top();
                st.pop();
            }
            
            else if(res != ""){
                res += ' ';
                res += st.top();
                st.pop();
            }
        }
        return res;
    }
};
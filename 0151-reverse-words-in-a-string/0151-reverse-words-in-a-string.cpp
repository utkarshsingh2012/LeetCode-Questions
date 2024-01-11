class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string res = "";
        string word = "";
        for(int i = 0; i< s.size(); i++){
            if(s[i] == ' '){
                if(word != ""){
                    st.push(word);
                    word = "";
                }
            }
            else{
                word += s[i];
            }
        }
        if(word != ""){
            st.push(word);
        }
        
        while(!st.empty()){
            if(res == ""){
                res += st.top();
                st.pop();
            }
            else{
                res = res + ' ' + st.top();
                st.pop();
            }
        }
        return res;
        
    }
};
class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string res = "";
        string word = "";
        for(int i = 0; i< s.size(); i++){
            st.push(s[i]);
        }
        
        while(!st.empty()){
            if(st.top() != ' '){
                word = st.top() + word;
                st.pop();
            }
            else{
                if(res == "" && word==""){
                    st.pop();
                }
                else if(res == "" && word != ""){
                    res += word;
                    word = "";
                    st.pop();
                }
                else if(res != "" && word != ""){
                    res += ' ';
                    res += word;
                    word = "";
                    st.pop();
                }
                else if(res != "" && word == ""){
                    st.pop();
                }
            }
        }
        if(st.empty()){
            if(res != "" && word != ""){
                res += ' ';
                res += word;
            }
            else if(res == "" && word != ""){
                res += word;
            }
        }
        return res;
    }
};
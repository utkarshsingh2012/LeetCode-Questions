class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(int i = 0; i<s.length(); i++){
            if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)){
                res+= s[i];
            }
            else if(s[i] >= 65 && s[i] <= 90){
                char ch = tolower(s[i]);
                res += ch;
            }
        }
        string ans = res;
        reverse(res.begin(), res.end());
        return(ans == res);
    }
};
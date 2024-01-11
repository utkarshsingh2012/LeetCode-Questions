class Solution {
public:
    bool isSubsequence(string s2, string s1) {
        int i = 0, j = 0;
        while(i<s1.length() && j < s2.length()){
            if(s1[i] == s2[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        if(j == s2.length())  return true;
        return false;
    }
};
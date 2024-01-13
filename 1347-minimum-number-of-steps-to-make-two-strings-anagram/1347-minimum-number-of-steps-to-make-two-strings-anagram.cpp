class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.length();
        int count[26] = {0} ;
        for(int i = 0; i<n; i++){
            count[s[i]-'a']++;
        }
        for(int i = 0; i<n; i++){
            if(count[t[i]-'a'] > 0){
                count[t[i]-'a']--;
            }
        }
        int res = 0;
        for(int i = 0; i<26; i++){
            res += count[i];
        }
        return res;
    }
};
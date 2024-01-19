class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())    return false;
        unordered_map<char,char> mp, tp;
        
        for(int i = 0; i<s.size(); i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = t[i];
            }
            else{
                if(mp[s[i]] != t[i])    return false;
            }
        }
        for(int i = 0; i<s.size(); i++){
            if(tp.find(t[i]) != tp.end()){
                if(tp[t[i]] == s[i]){
                    continue;
                }
                else{
                    return false;
                }
            }
            else{
                tp[t[i]] = s[i];
            }
        }
        return true;
    }
};
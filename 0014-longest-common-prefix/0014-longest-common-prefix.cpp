class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string w = "";
        for(int i = 0; i<strs[0].size(); i++){
            char ch = strs[0][i];
            for(int j = 1; j<strs.size(); j++){
                if(strs[j][i] != ch){
                    return w;
                }
            }
            w += ch;
        }
        return w;
    }
};
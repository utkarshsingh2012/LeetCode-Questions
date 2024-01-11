class Solution {
public:
    string largestOddNumber(string num) {
        string w = "";
        int res = -1;
        for(int i = num.size()-1; i>=0; i--){
            if(num[i]%2 != 0){
                res = i;
                break;
            }
        }
        if(res == -1)   return w;
        for(int i = 0; i<=res; i++){
            w +=num[i];
        }
        return w;
    }
};
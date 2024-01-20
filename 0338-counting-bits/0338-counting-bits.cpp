class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vec;
        for(int i = 0; i <=n; i++){
            int j = i, res = 0;
            while(j != 0){
                j = (j& (j-1));
                res++;
            }
            vec.push_back(res);
        }
        return vec;
    }
};
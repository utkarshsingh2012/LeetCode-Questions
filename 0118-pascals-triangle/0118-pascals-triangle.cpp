class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> vec( n , vector<int> (n, 0));
        vec[0][0] = 1;
        for(int i = 1; i<n; i++){
            for(int j = 0; j<n; j++){
                if( i == j || j == 0){
                    vec[i][j] = 1;
                }
                else{
                    vec[i][j] = vec[i-1][j] + vec[i-1][j-1];
                }
            }
        }
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++){
            vector<int> v;
            for(int j = 0; j<n; j++){
                if(vec[i][j] == 0){
                    continue;
                }
                else{
                    v.push_back(vec[i][j]);
                }
            }
            ans.push_back(v);
        }
        return ans;
        
    }
};
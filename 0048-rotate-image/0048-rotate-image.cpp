class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                swap(mat[i][j], mat[j][i]);
                if(i == j){
                    break;
                }
                
            }
        }
       
        for(int i = 0; i<n; i++){
            for(int j = 0; j<=(m-1)/2; j++){
                swap(mat[i][j], mat[i][n-j-1]);
            }
            
        }
    }
};
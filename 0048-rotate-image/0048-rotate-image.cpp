class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(i == j){
                    break;
                }
                else{
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
        
        for(int i = 0; i<n; i++){
            int low = 0, high = m-1;
            while(low <= high){
                swap(matrix[i][low], matrix[i][high]);
                low++;
                high--;
            }
        }
    }
};
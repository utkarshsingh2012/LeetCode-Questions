class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> ans;
        for(int i = 0; i<n; i++){
            vector<int> vec;
            for(int j = 0; j<n; j++){
                vec.push_back(matrix[j][i]);
            }
            ans.push_back(vec);
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n/2; j++){
                swap(ans[i][j], ans[i][n-1-j]);
            }
        }
        
        matrix = ans;
    }
};
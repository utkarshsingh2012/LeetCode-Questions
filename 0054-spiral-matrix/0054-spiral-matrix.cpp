class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> vec;
        int top = 0, bottom = n-1, left = 0, right = m-1;
        while(top <= bottom && left <= right){
            for(int i = left; i<= right; i++){
                vec.push_back(matrix[top][i]);
            }
            top++;
            if(top > bottom) return vec;
            for(int i = top; i<= bottom; i++){
                vec.push_back(matrix[i][right]);
            }
            right--;
            if(left > right)    return vec;
            for(int i = right; i >= left; i--){
                vec.push_back(matrix[bottom][i]);
            }
            bottom--;
            if(top > bottom) return vec;
            for(int i = bottom; i >= top; i--){
                vec.push_back(matrix[i][left]);
            }
            left++;
            if(left > right)    return vec;
        }
        return vec;
    }
};
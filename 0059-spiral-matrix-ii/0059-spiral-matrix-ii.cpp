class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n, 0));
        int left = 0;
        int right =n - 1;
        int top = 0;
        int bottom =n - 1;
        int dir = 0;
        int start = 1;
        
        while(top <= bottom and left <= right){
            if(dir == 0){
                for(int i = left ; i <= right ; i++){
                    matrix[top][i] = start ;
                    start ++;
                }
                top++;
            }
            else if(dir == 1){
                for(int i = top ; i<= bottom ; i++){
                    matrix[i][right] = start;
                    start++;
                }
                right --;
            }
            else if(dir == 2){
                for(int i = right ; i >= left ; i--){
                    matrix[bottom][i] = start;
                    start++;
                }
                bottom --;
            }
            else{
                for(int i = bottom ; i >= top ; i--){
                    matrix[i][left] = start;
                    start++;
                }
                left++;
            }
            dir = (dir + 1) % 4;
        }
        return matrix;
    }
};
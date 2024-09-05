class Solution {
public:
    vector<int> res;
    void print(vector<vector<int>>& matrix,int l ,int r ,int top ,int bottom){
        for(int i = l ; i < r ; i++){
            res.push_back(matrix[top][i]);
        }
        for(int i = top + 1; i < bottom ; i++){
            res.push_back(matrix[i][r - 1]);
        }
        if(top == bottom - 1) return;
        for(int i = r - 2; i >= l; i--){
            res.push_back(matrix[bottom - 1][i]);
        }
        if(l == r- 1) return ;
        for(int i = bottom - 2 ; i > top ; i--){
            res.push_back(matrix[i][l]);
        }
        return;
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0;
        int r = m;
        int top = 0;
        int bottom = n;
        while(top < bottom and l < r){
            print(matrix,l,r,top,bottom);
            l++;
            r--;
            top++;
            bottom--;
        }
        return res;

        


        

    }
};
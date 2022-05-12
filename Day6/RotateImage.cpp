class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int k = 0;
        //Transpose
        for(int i=0; i<row; i++){
            for(int j=k; j<col; j++){
               swap(matrix[i][j],matrix[j][i]);
            }
            k++;
        }
        
        //Reverse
        for(int i=0; i<row; i++){
            for(int j =0; j<col/2;j++){
                swap(matrix[i][j],matrix[i][col-1-j]);
            }
        }
        
        
    }
};

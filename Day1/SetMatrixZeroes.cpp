class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<pair<int,int>> ind;
        for(int i =0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]==0){
                    ind.push_back({i,j});
            
                }
            }   
        }
        for(auto it: ind){
            int r = it.first, c = it.second;
            for(int i=0; i<col; i++){
                matrix[r][i] = 0;
            }
            for(int i=0; i<row; i++){
                matrix[i][c] = 0;
            }
        }
        
    }
};

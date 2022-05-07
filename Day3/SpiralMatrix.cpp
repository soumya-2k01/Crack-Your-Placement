class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int ele = row*col;
        int initrow = 0, initcol = 0;
        vector<int> res;
        while(ele>0){
            for(int i=initcol; i<col; i++){
                res.push_back(matrix[initrow][i]);
                ele--;
                if(ele==0)break;
            }
            initrow++;
            if(ele==0)break;
            for(int i=initrow; i<row; i++){
                res.push_back(matrix[i][col-1]);
                ele--;
            }
            col--;
            if(ele==0)break;

            for(int i=col-1; i>=initcol; i--){
                res.push_back(matrix[row-1][i]);
                ele--;
            }
            row--;
            if(ele==0)break;
            for(int i=row-1; i>=initrow; i--){
                res.push_back(matrix[i][initcol]);
                ele--;
            }
            initcol++;
            if(ele==0)break;
            

            
        } 
        return res;
        
    }
};

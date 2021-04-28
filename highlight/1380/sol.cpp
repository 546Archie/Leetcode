class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ret;
        int col_sz = matrix[0].size();
        int row_sz = matrix.size();
        //col_idx: size is row_sz, used to store the col_index of the minmum of this row
        vector<int> col_idx(row_sz, 0);
        //row_idx: size is col_sz, used to store the row_index of the maxmum of this column        
        vector<int> row_idx(col_sz, 0);
        for(int i = 0 ; i < row_sz ; i++){
            for(int j = 0 ; j < col_sz ; j++){
                //test for minmum of the row first
                if(matrix[i][j]<matrix[i][col_idx[i]]){
                    col_idx[i] = j;
                }
                //test for the maxmum if the col
                if(matrix[i][j]>matrix[row_idx[j]][j]){
                    row_idx[j] = i;
                }
            }
        }
        if(col_sz > row_sz){
            for(int i = 0 ; i < row_sz ; i++){
                if(i==row_idx[col_idx[i]]){
                    ret.push_back(matrix[i][col_idx[i]]);
                }
            }
        }
        else{
            for(int i = 0 ; i < col_sz ; i++){
                if(i==col_idx[row_idx[i]]){
                    ret.push_back(matrix[row_idx[i]][i]);
                }
            }
        }
        return ret;
    }
};

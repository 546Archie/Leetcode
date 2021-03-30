class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        if(matrix.size()==1){
            return true;
        }
//        cout<<matrix.size()<<endl;
        int col = matrix[0].size();
        int row = matrix.size();
        int base, j, cur_col, cur_row;
        for(int i = 0 ; i < row ; i++){
            cur_row = i;
            cur_col = 0;
            base = matrix[cur_row][cur_col];
            //cout<<"base: "<<base<<endl;
            if(cur_col+1 < col)
                cur_col++;
            else{
                continue;
            }
            for(cur_col ; cur_col < col ; cur_col++){
                //cout<<"row, col: "<<cur_row<<cur_col<<endl;
                if(cur_row+1 < row){
                    cur_row++;
                }
                else{
                    break;
                }
                //cout<<"current pointA: "<<cur_row<<cur_col<<" "<<matrix[cur_row][cur_col]<<endl;
                if(base!=matrix[cur_row][cur_col])
                    return false;
            }
        }
        for(int i = 0 ; i < col ; i++){
            cur_col = i;
            cur_row = 0;
            base = matrix[cur_row][cur_col];
            if(cur_row+1 < row)
                cur_row++;
            else
                continue;
            for(cur_row ; cur_row < row ; cur_row++){
                if(cur_col+1 < col)
                    cur_col++;
                else
                    break;
                //cout<<"current pointB: "<<cur_row<<cur_col<<" "<<matrix[cur_row][cur_col]<<endl;
                if(base!=matrix[cur_row][cur_col])
                    return false;
            }
        }
        return true;
    }
};

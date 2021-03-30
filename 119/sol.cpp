class Solution {
public:
    vector<int> getRow(int row) {
        vector<vector <int>> vec(row+1, vector<int>(1,0));
        vec[0][0] = 1;
        if(row==0)
            return vec[0];
        for(int i = 1 ; i < row+1 ; i++){
            vec[i].resize(i+1);
            vec[i][0] = vec[i][i] = 1;
            for(int j = 1 ; j < i ; j++){
                vec[i][j] = vec[i-1][j-1]+vec[i-1][j];
            }
        }
        return vec[row];
    }
};

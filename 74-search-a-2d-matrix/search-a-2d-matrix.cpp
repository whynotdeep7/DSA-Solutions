class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int colm=matrix[0].size();

        for(int i=0;i<rows;i++){
            for(int j=0;j<colm;j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};
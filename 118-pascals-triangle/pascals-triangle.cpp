class Solution {
private:
        int nCr(int n,int r){
            long long res=1;
            for(int i=0;i<r;i++){
                res=res*(n-i);
                res=res/(i+1);
            }
            return (int)res;
        }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>triangle(numRows);
        for(int i=0;i<numRows;i++){
            triangle[i].resize(i+1);
            for(int j=0;j<=i;j++){
                triangle[i][j]=nCr(i,j);
            }
        }
        return triangle;

        
    }
};
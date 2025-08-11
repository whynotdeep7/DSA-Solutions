/*
Idea->performing binary search for each row
TC->O(m*log n)
SC->O(1)
*/
class Solution {
private:
    bool binarySearch(vector<int> &row,int target){
        int low=0;
        int high=row.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(row[mid]==target)return true;
            else if(row[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &row: matrix){
            if(binarySearch(row,target)){
                return true;
            }
        }
        return false;
    }
};
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==pivot){
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                res.push_back(nums[i]);
            }
        }
        return res;

    }
};
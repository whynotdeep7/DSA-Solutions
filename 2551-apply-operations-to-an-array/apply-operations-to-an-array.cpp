class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        //just do simple operations on array while traversing
        //and at the end move zeros to the end
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[(i+1)]){
                continue;
            }
            else if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        int nonzero=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[nonzero]);
                nonzero++;
            }
        }
        return nums;
        
    }
};
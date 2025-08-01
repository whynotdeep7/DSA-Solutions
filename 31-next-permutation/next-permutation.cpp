class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;

        while(i>=0 && nums[i]>=nums[i+1]){//finding 1st index from end such that nums[i]<nums[i+1]
            i--;
        }

        if(i>=0){
            int j=n-1;
            while(nums[j]<=nums[i]){//finding  j where nums[j] > nums[i]
                j--;
            }
            swap(nums[j],nums[i]);//swaping i and j values
        }
        reverse(nums.begin()+i+1,nums.end());
    }
};
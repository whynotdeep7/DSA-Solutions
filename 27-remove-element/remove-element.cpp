class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        for(auto num: nums){
            if(num!=val){
                nums[i++]=num;
            }
        }
        return i;
        
    }
};
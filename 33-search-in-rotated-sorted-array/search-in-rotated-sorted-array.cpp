class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            if(nums[mid]>=nums[left]){//to check if left half is sorted
                if(target>=nums[left]&& target<nums[mid]){//checking if target is present in left sorted region
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else{//if right half is sorted
                if(target>nums[mid] && target<=nums[right]){//cheking if target is present in right sorted region
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }

            }
        }
        return -1;

    }
};
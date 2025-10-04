class Solution {
    public int maximumDifference(int[] nums) {
         int minVal = nums[0]; // minimum value seen so far
        int maxDiff = -1;

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] > minVal) {
                maxDiff = Math.max(maxDiff, nums[i] - minVal);
            } else {
                minVal = nums[i]; // update minVal if current is smaller
            }
        }
        return maxDiff;
    }
}
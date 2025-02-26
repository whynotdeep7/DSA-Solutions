class Solution {
private:
    int func(int n, vector<int> nums, vector<int> &dp){
        //base case
        if(n < 0) return 0;
        if(dp[n] != -1) return dp[n];
        //rec relation
        int pick = func(n-2, nums, dp) + nums[n];
        int not_pick = func(n-1, nums, dp);

        return dp[n] = max(pick, not_pick);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return func(nums.size()-1, nums,dp);
    }
};
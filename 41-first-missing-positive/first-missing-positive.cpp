class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> grbge;
        int n = nums.size();
        vector<int> nums_copy = nums;
        for (int i = 0; i < n; i++) {
            if (nums[i] <= 0) {
                grbge.push_back(nums[i]);
            }
        }

        unordered_map<int, int> mpp;
        int missing = 0;
        for (int i = 1; i <= n + 1; i++) {
            mpp[i] = 1;
        }

        for (auto &num :nums) {
            if (mpp.count(num)) {
                mpp[num]--;
            }
        }
        for (int i=1; i<=n+1;i++) {
            if (mpp[i]== 1) {
                missing =i;
                break;//break if first found
            }
        }

        return missing;
    }
};

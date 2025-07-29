class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
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

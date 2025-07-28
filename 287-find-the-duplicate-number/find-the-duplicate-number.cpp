class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int> mpp;
       for(auto num: nums){
            mpp[num]++;
       }
       for(auto &it : mpp){
            if(it.second>1){
                return it.first;
            }
       }
        return -1;
    }
};
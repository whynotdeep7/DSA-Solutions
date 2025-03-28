class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        unordered_map<int,int> mpp;
        for(auto num:nums){
            mpp[num]++;
        }
        for(auto& pair: mpp){
            if(pair.second >n/3){
                res.push_back(pair.first);
            }
        }
        return res;
    }
};
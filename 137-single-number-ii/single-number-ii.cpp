 //brute will be using a hashmap but is inefficient

 //optimal solution should be knowing before hand{conceps of buckets}
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto num:nums){
            mpp[num]++;
        }
        for(auto &it: mpp){
            if(it.second==1)return it.first;
        }
        return -1;

    }
};
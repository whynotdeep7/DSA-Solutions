class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       int n=nums.size();
       unordered_map<int,int> mpp;
       vector<int>res;
       for(int i=1;i<=n;i++)mpp[i]++;
       for(auto num:nums){
            mpp[num]--;
       }

        int duplicate  = 0,missing=0;

        for(auto a :mpp){
            if(a.second == -1)duplicate = a.first;
            if(a.second == 1)missing = a.first;
        }

        return {duplicate,missing};
    }
};
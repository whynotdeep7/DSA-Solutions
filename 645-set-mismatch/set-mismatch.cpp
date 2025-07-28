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

        int dup= 0,miss=0;

        for(auto it :mpp){
            if(it.second == -1)dup = it.first;
            if(it.second == 1)miss = it.first;
        }

        return {dup,miss};
    }
};
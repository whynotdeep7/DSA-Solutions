class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        unordered_map<int,int>mpp;//made unordred map

        for(auto &pair:nums1){//checking each pair of nums1;
            mpp[pair[0]]=mpp[pair[0]]+pair[1];//adding IDs and the value i.e.mpp[1]=mpp[1]+mpp[2]
        }

        for(auto &pair:nums2){//checking each pair of nums2
            mpp[pair[0]]=mpp[pair[0]]+pair[1];
        }
        vector<vector<int>>res;
        for(auto &it:mpp){
            res.push_back({it.first,it.second});
        }
        sort(res.begin(),res.end());
        return res;

    }
};
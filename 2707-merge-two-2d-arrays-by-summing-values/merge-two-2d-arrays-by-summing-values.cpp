class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        //using two pointers same as merge sorted array
        int m=nums1.size();
        int n=nums2.size();
        vector<vector<int>>res;

        int i=0;
        int j=0;

        while(i<m&&j<n){
            if(nums1[i][0]<nums2[j][0]){
                res.push_back(nums1[i]);//if nums1's pair id is less then push-back the whole pair
                i++;//increase i by 1
            }
            else if(nums1[i][0]>nums2[j][0]){//if nums2's pair id is less then push-back the whole pair
                res.push_back(nums2[j]);
                j++;
            }
            else{
                res.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});//if both ids are same get 1 id from both ids and sum the value of both pair of both aray
                i++;//increase by 1
                j++;//increase by 1
            }
        }
        while(i<m){//
                res.push_back(nums1[i]);
                i++;
            }
        while(j<n){
            res.push_back(nums2[j]);
            j++;
        }

        return res;

        // int m=nums1.size();
        // int n=nums2.size();
        // unordered_map<int,int>mpp;//made unordred map

        // for(auto &pair:nums1){//checking each pair of nums1;
        //     mpp[pair[0]]=mpp[pair[0]]+pair[1];//adding IDs and the value i.e.mpp[1]=mpp[1]+mpp[2]
        // }

        // for(auto &pair:nums2){//checking each pair of nums2
        //     mpp[pair[0]]=mpp[pair[0]]+pair[1];
        // }
        // vector<vector<int>>res;
        // for(auto &it:mpp){
        //     res.push_back({it.first,it.second});
        // }
        // sort(res.begin(),res.end());
        // return res;

    }
};
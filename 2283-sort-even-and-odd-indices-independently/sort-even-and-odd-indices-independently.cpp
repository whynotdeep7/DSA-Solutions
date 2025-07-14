class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>res;
        vector<int> odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }

        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        int evenptr=0;
        int oddptr =0;
         for(int i=0;i<nums.size();i++){
            if(i%2==0){
                res.push_back(even[evenptr++]);
            }
            else{
                res.push_back(odd[oddptr++]);
            }
         }
         return res;
    }
};
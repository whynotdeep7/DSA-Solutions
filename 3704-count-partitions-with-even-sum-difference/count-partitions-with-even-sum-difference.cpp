/*
l+r=sum
tsum=odd-> x=even && y=odd || x=odd|| y =even
tsuym=even-> x,y=odd || x,y=even

TC=O(N)
SC=O(1)
*/
class Solution {
public:
    int countPartitions(vector<int>& nums) {
       int tsum=0;
       for(auto num:nums){
        tsum+=num;
       }
       if(tsum%2==0){
            return nums.size()-1;
       }
       else{
        return 0;
       }
    }
};
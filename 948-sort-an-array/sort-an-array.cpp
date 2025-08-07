class Solution {
private:
        void mergesort(vector<int>& nums,int low,int high){
            if(low==high)return;
            int mid=(low+high)/2;
            mergesort(nums,low,mid);//left one
            mergesort(nums,mid+1,high);//right one
            merge(nums,low,mid,high);//merging them 
        }   
        void merge(vector<int> &nums,int low,int mid,int high){//merge the two hypothetical arrays
            vector<int> temp;
            int left=low;
            int right=mid+1;
            while(left<=mid && right<=high){
                if(nums[left]<=nums[right]){
                    temp.push_back(nums[left]);
                    left++;
                }
                else{
                    temp.push_back(nums[right]);
                    right++;
                }
            }
            while(left<=mid){
                temp.push_back(nums[left]);
                left++;
            }
            while(right<=high){
                temp.push_back(nums[right]);
                right++;
            }
            for(int i=low;i<=high;i++){
                nums[i]=temp[i-low];
            }
        } 
public:
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};
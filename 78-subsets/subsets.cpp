class Solution {
private:
    void helper(int index,int n,vector<int>& list,vector<vector<int>>& ans,vector<int>& nums){
        if(index==n){
            ans.push_back(list);
            return;
        }
        list.push_back(nums[index]);
        helper(index+1,n,list,ans,nums);

        list.pop_back();

        helper(index+1,n,list,ans,nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>list;
        helper(0,nums.size(),list,ans,nums);
        return ans;
    }
};
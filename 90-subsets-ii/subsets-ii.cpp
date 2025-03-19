class Solution {
private:
        void helper(int index,vector<int>& list,vector<vector<int>>& ans,vector<int>& nums){
            if(index==nums.size()){
                ans.push_back(list);
                return;
            }
            list.push_back(nums[index]);
            helper(index+1,list,ans,nums);
            list.pop_back();

            for(int i=index+1;i<nums.size();i++){
                if(nums[i]!=nums[index]){
                    helper(i,list,ans,nums);
                    return;
                }
            }
            helper(nums.size(),list,ans,nums);

            
        }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>list;
        vector<vector<int>> ans;
        helper(0,list,ans,nums);
        return ans;
    }
};
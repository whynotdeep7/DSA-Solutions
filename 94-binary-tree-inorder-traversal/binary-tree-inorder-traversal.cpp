/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void helper(TreeNode* root,vector<int> &arr){
        if(root==NULL)return;

        helper(root->left,arr);//left traversal
        arr.push_back(root->val);//accessing value
        helper(root->right,arr);//right traversal
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        helper(root,arr);
        return arr;
    }
};
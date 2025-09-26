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
    bool helper(TreeNode* root,long minval,long maxval){
        if(!root)return true;
        if(root->val>=maxval || root->val <= minval)return false;

        bool leftValid= helper(root->left,minval,root->val);//validtaing the left subtree,it should less than root->val
        bool rightValid=helper(root->right,root->val,maxval);//validtaing the right subtree,it should greater than root->val
        return leftValid && rightValid;
    }
public:
    bool isValidBST(TreeNode* root) {
        return helper(root,LONG_MIN,LONG_MAX);
    }
};
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
        int helper(TreeNode* root){
            if(!root)return 0;

            int lf=helper(root->left);
            int rh=helper(root->right);

            return 1+ lf+rh;
        }
public:
    int countNodes(TreeNode* root) {
        int res=helper(root);
        return res;
    }
};
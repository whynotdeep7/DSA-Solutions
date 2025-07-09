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
        int height(TreeNode* root){//just like max depth with DFS but with some changes
            if(root==NULL)return 0;

            int lh=height(root->left);//going to left 
            if(lh==-1)return -1;
            int rh=height(root->right);//going to right
            if(rh==-1)return -1;
            if(abs(lh-rh)>1)return -1;
            return 1+max(lh,rh);
        }
public:
    bool isBalanced(TreeNode* root) {
        return height(root)!=-1;
    }
};
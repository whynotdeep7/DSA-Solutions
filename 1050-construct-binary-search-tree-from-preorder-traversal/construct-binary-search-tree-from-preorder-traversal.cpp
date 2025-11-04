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
    void buildTree(TreeNode* node, int value){
        if(!node)return;
        if(node->val> value){
            if(node->left !=NULL){
                //if there is a left present then going to its left
                buildTree(node->left,value);
            }
            else{
                //if not then create one
                node->left= new TreeNode(value);
            }
        }
        else{
            //if there is a right present then going to its right
            if(node->right != NULL){
                buildTree(node->right,value);
            }
            else{
                //if not then create one
                node->right= new TreeNode(value);
            }
        }
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        //taking root as the first element
        TreeNode* root=new TreeNode(preorder[0]);

        //looping through the array to get elements 
        for(int i=1;i<preorder.size();i++){
            buildTree(root,preorder[i]);
        }
        return root;
    }
};
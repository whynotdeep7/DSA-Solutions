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
    TreeNode* minval(TreeNode* root){
        TreeNode* temp=root;
        while(temp->left!=NULL){
            temp=temp->left;
        }
        return temp;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)return root;
        if(key<root->val){
            root->left=deleteNode(root->left,key);//if key value < node->val we move left of bst
        }
        else if(key>root->val){
            root->right=deleteNode(root->right,key);//if key value > node->val we move right of bst
        }
        else{
            //upto this we have found the node to delete which is == key

            //  1 CHILD     {OF THE NODE WE HAVE TO DELETE}
            if(root->left ==NULL){//RIGHT CHILD
                TreeNode* rightchild=root->right;
                delete root;
                return rightchild;
            }else if(root->right ==NULL){//LEFT CHILD
                TreeNode* leftchild=root->left;
                delete root;
                return leftchild;
            }//2 CHILD
            else{
                TreeNode* minNode=minval(root->right);//if get the child which is next bigger number of that NODE
                root->val=minNode->val;
                root->right=deleteNode(root->right,minNode->val);
            }

        }
        return root;
    }
};
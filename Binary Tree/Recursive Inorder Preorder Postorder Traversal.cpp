class Solution {
public:
    void inorder(vector<int>&ans, TreeNode* root){
        if(root!=NULL){
            inorder(ans,root->left);
            ans.push_back(root->val);
            inorder(ans,root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(ans,root);
        return ans;
        
    }
};
 
// Preorder Traversal

class Solution {
public:
    void  preorder(vector<int>&ans, TreeNode* root){
        if(root!=NULL){
            ans.push_back(root->val);
             preorder(ans,root->left);
             preorder(ans,root->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
         preorder(ans,root);
        return ans;
        
    }
};

// Postorder Traversal

class Solution {
public:
    void  postorder(vector<int>&ans, TreeNode* root){
        if(root!=NULL){
            
             postorder(ans,root->left);
             postorder(ans,root->right);
            ans.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
         postorder(ans,root);
        return ans;
        
    }
};

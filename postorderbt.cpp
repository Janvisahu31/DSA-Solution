class Solution {

    
    void postorder(TreeNode* root, vector<int>& ans){
        if(root == nullptr){
            return;
        }
        
        postorder(root->left,ans);
        postorder(root->right,ans);
        ans.push_back(root->val);
    

    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
       postorder(root,ans);
       return ans;
        
    }

    
};
// postorder tht is left - right - node hterefor recursively calling postorder bst

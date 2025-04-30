//height of binary tree
 int maxDepth(TreeNode* root) {
         if(root == NULL){
            return 0;
        }
   
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        return 1+ max(lh,rh);
    }
//recursively calling the function and keeping track of the height 


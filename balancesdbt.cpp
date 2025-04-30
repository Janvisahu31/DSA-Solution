// finding if the tree is balancesd or not

 bool isBalanced(TreeNode* root) {
        return dfsHeight(root) != -1; 
    }
    int dfsHeight(TreeNode* root) {
        
        if (root == NULL) return 0;
        int leftHeight = dfsHeight(root->left);
        if (leftHeight == -1) 
            return -1;
        int rightHeight = dfsHeight(root->right);
        if (rightHeight == -1) 
            return -1;

        if (abs(leftHeight - rightHeight) > 1)  
            return -1;

        return max(leftHeight, rightHeight) + 1;
    }

// recursively calling the left and right subtree while keeping track of their height and measuring if they are more than one return false if yes

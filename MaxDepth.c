/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root == NULL){
        return 0;
    }
     int r_h = maxDepth(root->right);
    int l_h = maxDepth(root->left);
    if(r_h > l_h)
    {
        return r_h + 1;
    }
    else
    {
          return l_h + 1;
    }
}

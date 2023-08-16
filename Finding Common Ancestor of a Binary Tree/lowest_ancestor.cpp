TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    TreeNode *current_root = root;
    while (current_root){
        if(p->val > current_root->val && q->val > current_root->val){
            current_root = current_root->right;
        }else if(p->val < current_root->val && q->val < current_root->val){
            current_root = current_root->left;
        }else{
            return current_root;
        }
    }
  return NULL;
    


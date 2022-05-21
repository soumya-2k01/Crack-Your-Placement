class Solution {
public:
    int h(TreeNode *root){
        if(!root)return 0;
        return (1+max(h(root->left),h(root->right)));
    }
    void check(TreeNode *root, int &ans){
        if(!root)return;
        ans = max(ans,h(root->left)+h(root->right)); 
        check(root->left,ans);
        check(root->right,ans);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        int ans = 0;
        check(root,ans);
        return ans;
    }
};

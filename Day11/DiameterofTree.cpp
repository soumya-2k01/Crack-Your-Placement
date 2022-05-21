class Solution {
public:
    int h(TreeNode *root, int &ans){
        if(!root)return 0;
        int lh = h(root->left,ans);
        int rh = h(root->right,ans);
        ans = max(ans,lh+rh);
        return (1+max(lh,rh));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        int ans = 0;
        h(root,ans);
        return ans;
    }
};

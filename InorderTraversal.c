// https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
    void treeRecurser(vector<int>& ans, TreeNode* root){
        if(root== NULL){
            return;
        }
        treeRecurser(ans, root->left);
        ans.push_back(root->val);
        treeRecurser(ans, root->right);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        treeRecurser(ans, root);
        return ans;
    }
};


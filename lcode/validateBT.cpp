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
public:
    TreeNode* prev;
    bool isValidBST(TreeNode* root) {
        prev = NULL;
        return dfs(root);
    }
    bool dfs(TreeNode* t){
        if(!t) return true;
        if(!dfs(t->left)) return false;
        if(prev != NULL && prev->val >= t->val) return false;
        prev = t;
        return dfs(t->right);
    }
};

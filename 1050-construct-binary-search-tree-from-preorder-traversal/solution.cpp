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
    TreeNode* buildTree(vector<int>& preorder, int& idx, int min, int max){
        if(idx > preorder.size() - 1){
            return nullptr;
        }
        if (preorder[idx] <= min || preorder[idx] >= max){
            return nullptr;
        }
    
        TreeNode* root = new TreeNode(preorder[idx]);
        idx++;
        root->left = buildTree(preorder, idx, min, root->val);
        root->right = buildTree(preorder, idx, root->val, max);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx = 0;
        TreeNode* root = buildTree(preorder, idx, INT_MIN, INT_MAX);
        return root;
    }
};

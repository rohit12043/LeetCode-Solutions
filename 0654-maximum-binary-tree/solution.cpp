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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       return createTree(nums, 0, nums.size() - 1);
    }

    TreeNode* createTree(vector<int>& nums, int left, int right){
        if(left > right)
        return nullptr;

        int maxIndex = left;

        for(int i = left; i <= right; i++){
            if(nums[maxIndex] < nums[i]){
                maxIndex = i;
            }
        }

        TreeNode* root = new TreeNode(nums[maxIndex]);
        root->left = createTree(nums, left, maxIndex - 1);
        root->right = createTree(nums, maxIndex + 1, right);

        return root; 
    }
};

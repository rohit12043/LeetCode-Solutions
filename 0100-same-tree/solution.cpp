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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr){
            return true;
        }

        vector<TreeNode*> curr = {p};
        vector<TreeNode*> curr1 = {q};

        while(!curr.empty() && !curr1.empty()){
            TreeNode* elem = curr.back();
            curr.pop_back();
            TreeNode* elem1 = curr1.back();
            curr1.pop_back();

            if (elem == nullptr && elem1 == nullptr) {
                continue;
            }
            if (elem == nullptr || elem1 == nullptr) {
                return false;
            }
            if(elem && elem1){
                if(elem->val == elem1->val){
                    curr.push_back(elem->left);
                    curr.push_back(elem->right);

                    curr1.push_back(elem1->left);
                    curr1.push_back(elem1->right);
                }
                else{
                    return false;
                    break;  
                }
            }
        }
        return true;
    }
};

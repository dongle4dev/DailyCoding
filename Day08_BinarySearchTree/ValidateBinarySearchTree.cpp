#include <iostream>
#include <vector>
using namespace std;
  //Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    void inOrder(TreeNode* root) {
        if (!root) return;
        
        inOrder(root->left);
        tree.push_back(root->val);
        inOrder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if (!root) return true;
        
        inOrder(root);
        
        for(int i = 1; i < tree.size(); ++i) {
            if (tree[i] <= tree[i-1]) return false;
        }
        return true;
    }
//     bool isValidBST(TreeNode* root) {
//         if (!root) return true;
        
//         if (!isValidBST(root->left)) return false;
        
//         if (prev && root->val <= prev->val) return false;
//         prev = root;
        
//         if (!isValidBST(root->right)) return false;
        
//         return true;
//     }
//     bool isValidBST(TreeNode* root) {
//         return fun(root, NULL, NULL);
//     }
    
//     bool fun(TreeNode* root, TreeNode* max, TreeNode* min){
//         if(!root) return true;
        
// 		//Using the same above logic
// 		//Just check if max or min-node is NULL, then follow it as true
        
//         if((!min || root->val > min->val) && (!max || root->val < max->val))
//             return fun(root->left, root, min) && fun(root->right, max, root);
//         return false;
//     }
private:
    vector<int> tree;
    TreeNode* prev = nullptr;
};
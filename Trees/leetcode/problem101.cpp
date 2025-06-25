// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     bool chksametree(TreeNode* p,TreeNode* q){
//         if(!p&&!q)  return 1;
//         if(!p||!q||p->val!=q->val)  return 0;
//         return chksametree(p->left,q->left) && chksametree(p->right,q->right);
//     }
//     bool isSymmetric(TreeNode* root) {
//         if(root==nullptr)   return 1;
//         if(root->left==nullptr &&root->right==nullptr)  return 1; 
//         return chksametree(root->left,root->right);
//     }
// };


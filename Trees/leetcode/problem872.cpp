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
//     void leafstorer(TreeNode* root,vector<int> &ans){
//         if(root==nullptr)   return;
//         leafstorer(root->left,ans);
//         if(root->left==nullptr && root->right==nullptr) ans.push_back(root->val);
//         leafstorer(root->right,ans);
//     }
//     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//         vector<int> ans1,ans2;
//         leafstorer(root1,ans1);
//         leafstorer(root2,ans2);
//         return ans1==ans2;
//         // the problem is both are using the same ans publicly declared varilbe(previsously) that's why its causing a issue
//     }
// };
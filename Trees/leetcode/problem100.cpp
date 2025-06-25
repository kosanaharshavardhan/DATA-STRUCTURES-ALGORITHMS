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
//     void vectormaker(TreeNode* root,vector<int> &nodes){
//         if(root==nullptr)  {
//             nodes.push_back(-100000001);
//             return;
//         } 
//         nodes.push_back(root->val);
//         vectormaker(root->left,nodes);
//         vectormaker(root->right,nodes);
//     }
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         vector<int> p1,q1;
//         vectormaker(p,p1);
//         vectormaker(q,q1);
//         return p1==q1&&p1.size()==q1.size();
//     }
// };
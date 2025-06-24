// #include<iostream>
// #include<vector>
// using namespace std;
// struct TreeNode{
//     int val;
//     struct Node* right;
//     struct Node* left;
//     Node(int val){
//         data=val;
//         right=left=nullptr;
//     }
// };
// class Solution {
// public:
//     struct TreeNode* root=new TreeNode(1);
//     vector<int> ans=preorderTraversal(root);
//     vector<int> ans;
//     vector<int> preorderTraversal(TreeNode* root) {
//         if(root==nullptr)   return ans;
//         ans.push_back(root->val);
//         preorderTraversal(root->left);
//         preorderTraversal(root->right);
//         return ans;
//     }
// };
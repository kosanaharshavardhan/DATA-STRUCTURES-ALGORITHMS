#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this->data=data;
        left=right=nullptr;
    }
};
static int idx=-1;
class Tree{
public:
    TreeNode* root;
    Tree(){
        root=nullptr;
    }
    
    TreeNode* Create(vector<int> &pre){
            idx++;
            if(pre[idx]==-1) return nullptr;
            TreeNode* root=new TreeNode(pre[idx]);
            root->left=Create(pre);
            root->right=Create(pre);
            return root;
    }
    void PreTraverse(TreeNode* root){
        if(root==nullptr) return;
        cout<<root->data<<" ";
        PreTraverse(root->left);
        PreTraverse(root->right);
    }

};

int main(){
vector<int> pre={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Tree T1;
T1.root=T1.Create(pre);
T1.PreTraverse(T1.root);
}
#include <iostream>
using namespace std;
class BstClass{
public:
    class TreeNode{
        public:
            int data;
            TreeNode* left;
            TreeNode* right;
            TreeNode(int val){
                this->data = val;
                this->left=nullptr;
                this->right=nullptr;
            }
    };
     TreeNode* root=nullptr;
    TreeNode* insert(TreeNode* root, int val){
        if(root==nullptr){
            TreeNode* newnode= new TreeNode(val);
            return newnode;
        }
        if(root->data>val){
            root->left=insert(root->left,val);
        }
        else{
            root->right=insert(root->right,val);
        }
        return root;
    }
    TreeNode* search(TreeNode* root, int val){
        if(root==nullptr){
            return nullptr;
        }
        if(root->data==val){
            return root;
        }
        else if(root->data>val){
            return search(root->left,val);
        }
        else{
            return search(root->right,val);
        }
    }
    void traversal(TreeNode* root){
        if(root==nullptr){
            return;
        }
        traversal(root->left);
        cout<<root->data<<" ";
        traversal(root->right);
    }
    TreeNode* remove(TreeNode* root, int val){
        return nullptr;
    }
};
 int main(){
        BstClass bt;
        bt.root=bt.insert(bt.root,10);
        bt.root=bt.insert(bt.root,20);
        bt.root=bt.insert(bt.root,5);
        bt.traversal(bt.root);

    }







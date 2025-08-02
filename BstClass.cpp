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
      if(root==nullptr) return nullptr;
      if(root->data > val){
            root->left=remove(root->left,val);
      }
      else if(root->data< val){
        root->right=remove(root->right,val);
      }
      else{
        if(root->left==nullptr && root->right==nullptr){
            delete root;
            return nullptr;
        }
        else if(root->left==nullptr){
            TreeNode* rightnode=root->right;
            delete root;
            return rightnode;
        }
        else if(root->right==nullptr){
            TreeNode* leftnode=root->left;
            delete root;
            return leftnode;
        }
        else{
            TreeNode* minsuccessor=minhelper(root->right);
            root->data=minsuccessor->data;
            root->right=remove(root->right,minsuccessor->data);
        }
        return root;
      }
        
    }

    TreeNode* update(TreeNode* root,int existing,int newdata){
        
    }
    TreeNode* minhelper(TreeNode* root){
        while(root->left!=nullptr){
            root=root->left;
        }
        return root;
    }
};
 int main(){
        BstClass bt;
        bt.root=bt.insert(bt.root,10);
        bt.root=bt.insert(bt.root,20);
        bt.root=bt.insert(bt.root,5);
        bt.root=bt.insert(bt.root,15);
        bt.root=bt.insert(bt.root,25);
        // bt.traversal(bt.root);
        cout<<endl;
        // if(!bt.search(bt.root,101)){
        // cout<<"Element not found\n";
        // }else
        // cout<<bt.search(bt.root,101);
        bt.traversal(bt.root);
        cout<<endl;
        bt.root=bt.remove(bt.root,10);
        bt.traversal(bt.root);

    }







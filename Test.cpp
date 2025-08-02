#include<iostream>
using namespace std;
class BST{
    public:
        class Node{
            public:
                int data;
                Node* left;
                Node* right;
                Node(int val){
                    data=val;
                    left=nullptr;
                    right=nullptr;
                }
        };
        Node* root=nullptr;
        Node* insert(Node* root,int val){
            if(root==nullptr){
                Node* newNode=new Node(val);
                return newNode;
            }
            else if(root->data<val){
                root->right=insert(root->right,val);
            }
            else{
                root->left=insert(root->left,val);
            }
            return root;
        }
        void Traverse(Node* root){
            if(root==nullptr) return;
            Traverse(root->left);
            std::cout<<root->data<<" ";
            Traverse(root->right);
        }
        int height(Node* root){
            if(root==nullptr)   return 0;
            return 1+max(height(root->left),height(root->right));
        }
     
};
   int main(){
            BST tree;
            tree.root=tree.insert(tree.root,8);
            tree.root=tree.insert(tree.root,2);
            tree.root=tree.insert(tree.root,3);
            tree.root=tree.insert(tree.root,4);
            tree.root=tree.insert(tree.root,5);
            tree.root=tree.insert(tree.root,6);
            tree.root=tree.insert(tree.root,7);
            tree.root=tree.insert(tree.root,1);
            tree.root=tree.insert(tree.root,9);
            tree.root=tree.insert(tree.root,10);
            tree.root=tree.insert(tree.root,11);
            tree.root=tree.insert(tree.root,12);
            tree.root=tree.insert(tree.root,13);
            // tree.root=tree.insert(tree.root,14);
            // tree.root=tree.insert(tree.root,15);
            // tree.root=tree.insert(tree.root,16);
            cout<<"height:"<<tree.height(tree.root);
        }

#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=nullptr;
    }
};
class Bst{
public:
    Node* root;
    Bst(){
        root=nullptr;
    }
    Node* InsertBst(Node* root,int val){
        if(root==nullptr){
            return new Node(val);
        }
        else if(root->data>val){
            root->left=InsertBst(root->left,val);
        }else{
            root->right=InsertBst(root->right,val);
        }
        return root;
    }
    void Read(Node* root){
        if(root==nullptr) return;
        cout<<root->data<<" ";
        Read(root->left);
        Read(root->right);
    }
    Node* search(Node* root,int val){
        if(root==nullptr)
        return nullptr;
        if(root->data==val){
            return root;
        }
        

        else if(root->data>val){
            return search(root->left,val);
        }else{
            return search(root->right,val);
        }
        

    }

    int inorpre(Node* root){
        Node* inopre=root;
        while(root->right!=nullptr){
            root=root->right;
            inopre=root;
        }
        return inopre->data;
    }
    // int inorpre(Node* root) {
    // while (root->right != nullptr) {
    //     root = root->right;
    // }
    // return root->data;
// }

    Node* Delete(Node* root,int val){
        if(root==nullptr) return nullptr;
        if(root->data>val){
            root->left=Delete(root->left,val);
        }else if(root->data<val){
            root->right=Delete(root->right,val);
        }else{
            if(root->left==nullptr && root->right==nullptr){
                delete(root);
                return nullptr;
            }
            else if(root->left!=nullptr && root->right!=nullptr){
                Bst temp;
                root->data=inorpre(root->left);
                root->left=Delete(root->left,root->data);

            }else{
                if(root->left!=nullptr){
                    Node* temp=root->left;
                    delete(root);
                    return temp;
                }else{
                    Node* temp=root->right;
                    delete(root);
                    return temp;
                }
            }
        }
        return root;
    }
};
int main(){
Bst b1;
b1.root=b1.InsertBst(b1.root,10);
b1.root=b1.InsertBst(b1.root,8);
b1.root=b1.InsertBst(b1.root,6);
b1.root=b1.InsertBst(b1.root,9);
b1.root=b1.InsertBst(b1.root,12);
b1.root=b1.InsertBst(b1.root,11);
b1.root=b1.InsertBst(b1.root,13);
b1.Read(b1.root);
b1.root=b1.Delete(b1.root,9);
b1.root=b1.Delete(b1.root,8);
b1.root=b1.Delete(b1.root,10);
b1.Read(b1.root);
// cout<<" "<<b1.search(b1.root,2)->data;
cout<<"\n"<<b1.root->data;
}
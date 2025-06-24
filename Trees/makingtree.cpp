// Using structure

#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* right;
    struct Node* left;
    Node(int val){
        data=val;
        right=left=nullptr;
    }
};
int main(){
        struct Node* root=new Node(1);
        struct Node* left=new Node(2);
        root->left=left;
         // root->left=new Node(2);

    
    return 0;
}
// similarly we can create using class

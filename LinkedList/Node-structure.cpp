#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};
class SLL{
public:
    Node* head;
    Node* tail;
    SLL(){
        head=nullptr;
        tail=NULL;
    } 
    
};
int main(){

}
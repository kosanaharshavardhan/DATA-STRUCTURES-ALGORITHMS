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
    void delete_pos(int pos){
        int cnt=1;
        Node* curr=head;
        Node* prev=curr;
        while(cnt++!=pos){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=nullptr;
        delete(curr);
    }
    void push_front(int data){
        if(head==nullptr){
            Node* newnode=new Node(data);
            head=newnode;
            tail=newnode;
        }else{
            Node* newnode=new Node(data);
            newnode->next=head;//*newnode.next=head;
            head=newnode;
        }
    }
    void push_back(int data){
        if(head==nullptr){
            Node* newnode=new Node(data);
            head=newnode;
            tail=newnode;
        }else{
            Node* newnode=new Node(data);
            tail->next=newnode;
            tail=newnode;
        }
    }

    void pop_front(){
        // Node* temp=head->next;
        // head=temp;
        if(head==nullptr) cout<<"can't perfrom";
        else{
            Node* temp=head;
            head=head->next;
            temp->next=nullptr;
            delete(temp);
        }

    }
    void insert_pos(int data,int pos){
        if(pos==1){
            push_front(data);
        }
        Node* curr=head;
        Node* prev=curr;
        int cnt=1;
        while ((cnt++)!=pos)
        {
            prev=curr;
            curr=curr->next;
        }
        Node* newnode=new Node(data);
        newnode->next=curr;
        prev->next=newnode;
        
    }
    void pop_back(){
        if(tail==nullptr){
            cout<<"can't perfrom";
        }else{
            Node* temp=head;
            while(temp->next!=tail){ //temp->next->next==mullptr;
                temp=temp->next;
            }
            tail=temp;
            temp=temp->next;
            tail->next=nullptr;
            delete(temp);
        }
    }

};
int main(){
SLL l1;
l1.push_front(1);
l1.push_front(2);
l1.push_back(21);
l1.push_back(122);
l1.push_back(100);
l1.insert_pos(321,2);
l1.insert_pos(4321,4);
// l1.pop_front();
l1.delete_pos(4);
// l1.pop_back();
// cout<<l1.head->data;
Node* temp=l1.head;
while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
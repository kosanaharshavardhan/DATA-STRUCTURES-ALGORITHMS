#include<iostream>
using namespace std;
class queue{
    public:
        class qstruct{
            public:
                int arr[100];
                int front=-1;
                int rear=-1;
                
        };
        qstruct que;


        void push(int x){
           if(que.front==-1){
                que.front=0;
                que.rear=0;
                que.arr[que.front]=x;
           }
           else if(que.rear<100){
            que.rear=que.rear+1;
            que.arr[que.rear]=x;
           }
           else{
            std::cout<<"queue full can't insert";
           }
        }
        int pop(){
            if(que.front==-1){
                cout<<"queue is empty can't pop";
            }
            else if(que.rear==0){
                cout<<que.arr[que.rear]<<" ";
                que.front=-1;
                que.rear=-1;
            }else{
                cout<<que.arr[que.front]<<" ";
                que.front++;
            }
        }
};
int main(){
    queue q;
    q.push(1);
      q.push(3);
        q.push(0);
          q.push(9);
            q.push(8);
              q.push(7);
                q.push(6);
                  q.push(5);
                  q.pop();
                q.pop();
            q.pop();
        q.pop();
}
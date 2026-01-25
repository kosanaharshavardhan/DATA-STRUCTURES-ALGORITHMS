#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* p=&a;
    cout<<a<<endl<<p<<endl<<*p;
    int** pp=&p;

    cout<<"&p="<<pp<<endl<<"&a="<<**pp<<"adres"<<&a;
}
//Notes:
// alias & arr->const pointer like head
// pointers can subtracted to get memeory b/w them
// pointer arthmetic
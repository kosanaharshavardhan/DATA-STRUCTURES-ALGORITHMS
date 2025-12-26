#include<iostream>
using namespace std;
int fun(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"f"<<a<<" "<<b<<endl;
}
int main(){
    int a=2,b=10;
    fun(a,b);
    cout<<a<<" "<<b<<endl;
}


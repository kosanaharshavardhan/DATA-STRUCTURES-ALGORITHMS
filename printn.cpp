#include<iostream>
using namespace std;
void printn(int i,int n){
    if(i>n) return;
    cout<<i;
    printn(i+1,n);
}
void print(int n){
    if(n<1) return;
    print(n-1);
    cout<<n;
}
void back(int n){
    if(n<1) return;
    cout<<n;
    back(n-1);
}
void backtrack(int i,int n){
    if(i>n) return;
    backtrack(i+1,n);
    cout<<i;
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    printn(1,n);
    cout<<endl;
    print(n);
    cout<<endl;
    back(n);
    cout<<endl;
    backtrack(1,n);
}
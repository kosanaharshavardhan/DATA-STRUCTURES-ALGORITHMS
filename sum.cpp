#include<iostream>
using namespace std;
void sum(int ans,int n){
    if(n<1){
        cout<<ans;
        return;
    }
    ans+=n;
    sum(ans,n-1);
}
int func(int n){
    if(n==1||n==0) return n;
    return n+func(n-1);
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    sum(0,n);
    cout<<endl<<func(n);
}
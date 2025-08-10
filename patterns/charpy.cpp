#include<iostream>
using namespace  std;
int main(){
    int n;
    cout<<"enter num:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char star='A';
        for(int j=0;j<2*i+1;j++){
            if(j<(2*i+1)/2){
                cout<<star;
                star+=1;
            }else{
                cout<<star;
                star--;
            }
        }

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}

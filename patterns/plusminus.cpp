#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num:";
    cin>>n;
    char star='A'+n-1;
    for(int i=0;i<n;i++){
        char temp=star--;
        for(int j=0;j<=i;j++){
            cout<<temp++;
        }
        cout<<endl;
    }
}


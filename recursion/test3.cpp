#include<iostream>
#include<vector>
using namespace std;
void Wholenumprinter(int n){
    if(n==-1)   return;
    Wholenumprinter(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    Wholenumprinter(n);
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int rev(int arr[],int i,int j){
    if(i>=(j/2)) return 1;
    if(arr[i]==arr[j-i-1]) rev(arr,i+1,j);
    else return 0;
}
int main(){
    int n;
    cout<<"enter m:";
    cin>>n;
    int arr[n];
    cout<<"enter arr:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<rev(arr,0,n);
     
}
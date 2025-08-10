// select minium = seslection 
#include<iostream>
using namespace std;
int main(){
    int a[5]={5,3,2,1,4};
    // for(int i=0;i<5;i++){
    //     for(int j=i+1;j<5;j++){
    //         if(a[i]>a[j]){
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }
    // for(int i=0;i<5;i++) cout<<a[i]<<" ";


    // bubble kick 1 to last;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(a[j]>a[j+1]){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
}
// selection (find all min) keep at first
// bubble pari check
// insertion bring to front front front
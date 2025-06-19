#include<iostream>
#include<vector>
using namespace std;

void printsubset(vector<int> a,vector<int> &ans,int i,int n){

    if(i==n){
       for(int j=0;j<ans.size();j++){
        cout<<ans[j]<<" ";
       }
       cout<<endl;
        return;
    }

    ans.push_back(a[i]);
    printsubset(a,ans,i+1,n);
    ans.pop_back();
    printsubset(a,ans,i+1,n);


}

int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    vector<int> a;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        // cin>>a[i];
        int ele;
        cin>>ele;
        a.push_back(ele);

    }
    vector<int> ans;
    printsubset(a,ans,0,n);
    return 0;
}


#include<iostream>
#include<map>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter n1:";
    cin>>n1;
    cout<<"Enter n2:";
    cin>>n2;
    int ans=0;
    for(int i=n1;i<=n2;i++){
        int temp=i;
        bool count=true;
        map<int,int> mp;
        while(temp>0){
            if(mp[temp%10]==0)
            mp[temp%10]++;
            else{
                count=false;
                break;
            }
            temp/=10;
        }
        mp.clear();
        if(count) ans++;
        
    }
    cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sort(arr,arr+5);
    if(arr[0]==arr[1] && arr[1]==arr[2] && arr[3]==arr[4]) cout<<"Yes"<<endl;
    else if(arr[0]==arr[1] && arr[3]==arr[2] && arr[3]==arr[4]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
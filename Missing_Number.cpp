#include<bits/stdc++.h>
using namespace std;

int main(){  
	long long n;
    cin>>n;
    long long arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n-1);
    int ans = n;
    for(int i=1;i<n;i++){
        if(arr[i-1]==i) continue;
        else {
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    long long n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(isPrime(i)) cout<<i<<" ";
    }
    return 0;
}
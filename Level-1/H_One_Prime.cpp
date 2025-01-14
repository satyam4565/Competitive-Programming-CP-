#include<iostream>
using namespace std;

bool isPrime(long long n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    long long n;
    cin>>n;
    if(isPrime(n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
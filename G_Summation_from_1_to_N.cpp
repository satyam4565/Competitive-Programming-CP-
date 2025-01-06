#include<iostream>
using namespace std;

long long summation(long long n){
    return 1ll*n*(n+1)/2;
}

int main(){
    long long n;
    cin>>n;
    cout<<summation(n)<<endl;
}
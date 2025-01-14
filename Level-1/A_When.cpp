#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; 
    cin>>n; 
    int a = 21 , b = 0;
    while(n){
        if(n<60){
            b+=n;
            n=0;
        }
        else{
            a++;
            n-=60;
        }
    }
    if(b<9) cout<<a<<":0"<<b<<endl;
    else cout<<a<<":"<<b<<endl;
    return 0;
}
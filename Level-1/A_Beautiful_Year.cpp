#include<bits/stdc++.h>
using namespace std;

bool diff(long long n){
    set<int> s;
    while(n){
        s.insert(n%10);
        n/=10;
    }
    if(s.size()==4) return true;
    return false;
}

int main(){
    long long n; 
    cin>>n; 
    int year = n;
    for(long long i=n+1;;i++){
        if(diff(i)){
            year = i;
            break;
        }
    }
    cout<<year<<endl;
    return 0;
}
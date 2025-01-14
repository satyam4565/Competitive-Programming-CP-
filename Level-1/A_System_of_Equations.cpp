#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for(int a=0;a<=31;a++){
        for(int b=0;b<=31;b++){
            if(((pow(a,2)+b)==n) && ((pow(b,2)+a)==m)) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
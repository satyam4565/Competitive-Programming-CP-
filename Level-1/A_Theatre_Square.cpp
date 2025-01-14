#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    cnt+=(ceil(a/c) + ceil(b/c));
    cout<<cnt<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,s;
    cin>>k>>s;
    long long cnt=0;
    for(long long a=0;a<=k;a++){
        for(long long b=0;b<=k;b++){
            int c = s-a-b;
            if(c<=k && c>=0) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int flag=0;
	while(t--){
		int a;
		cin>>a;
		if(a==1) {
			flag=1;
			break;
		}
	}
	if(flag==1) cout<<"HARD";
	else cout<<"EASY";
}
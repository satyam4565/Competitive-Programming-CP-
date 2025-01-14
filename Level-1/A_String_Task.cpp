#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='y') return true;
    return false;
}

int main(){  
	string s;
    cin>>s;
    string ans = "";
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });
    for(auto i : s){
        if(isVowel(i)) continue;
        else{
            ans+='.';
            ans+=i;
        }
    }
    cout<<ans<<endl;
	return 0;
}
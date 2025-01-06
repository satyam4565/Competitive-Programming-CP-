#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<string> v;
    char bre = '.';
    istringstream stream(s);
    string part;
    while (getline(stream, part, bre)) {
        v.push_back(part);
    }
    if(stoi(v[1])==0) cout<<"int "<<v[0]<<endl;
    else cout<<"float "<<v[0]<<" "<<"0."<<v[1]<<endl;
    return 0;     
}
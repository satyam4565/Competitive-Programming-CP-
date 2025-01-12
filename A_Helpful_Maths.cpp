#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<char> v;
    for(auto i : s){
        if(i=='+') continue;
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    s.clear();
    for(auto i : v){
        s=s+i+'+';
    }
    s.pop_back();
    cout<<s<<endl;
    return 0;
}

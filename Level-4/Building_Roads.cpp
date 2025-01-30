#include "bits/stdc++.h"
#define yup cout<<"YES"<<"\n"
#define nope cout<<"NO"<<"\n"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define frc(v,i,n) for(int i=0; i<(n); i++){cin>>v[i];}
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define bin(x,y)  bitset<y>(x)
using namespace std;
int MOD=1e9+7;

void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }

void dfs(vector<bool> &vis,int node,vector<vector<int>> &adj){
    vis[node]=1;
    for(auto i : adj[node]){
        if(!vis[i]) dfs(vis,i,adj);
    }
}

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>> adj(n);
    while(m--){
        int u,v;cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n,0);
    vector<int> nodes;
    int ans = -1;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            nodes.push_back(i+1);
            dfs(vis,i,adj);
            ans++;
        } 
    }
    vector<pair<int,int>> ansV;
    for(int i=1;i<nodes.size();i++){
        ansV.push_back({nodes[i-1],nodes[i]});
    }
    cout<<ans<<endl;
    for(auto i : ansV){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
    solve();
    return 0;
}
    
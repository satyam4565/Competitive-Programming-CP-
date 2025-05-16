#include "bits/stdc++.h"
#define yup cout<<"YES"<<"\n"
#define nope cout<<"NO"<<"\n"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define q_max priority_queue<int,vi>
#define q_min priority_queue<int,vi,greater<int>>
#define fr(i,n) for(int i=0; i<(n); i++)
#define frc(v,i,n) for(int i=0; i<(n); i++){cin>>v[i];}
#define loop(i,a,n) for(int i=(a); i<(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define bin(x,y)  bitset<y>(x)
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
using namespace std;
int MOD=1e9+7;

void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }


void solve(){
    int n,m;cin>>n>>m;
    string s1,s2;cin>>s1>>s2;
    int cnt = 1;
    while(s1.find(s2)==string::npos){
        if(s1.size() > 1LL * m * 2 + n){ 
            cout << -1 << "\n";
            return;
        }
        s1+=s1;
        cnt++;
    }
    cout<<cnt-1<<endl;
    
}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

    
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


void sieve(int n, vector<bool> &is_prime) {
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

bool check(int n,int k,vi &v1,vi &v2,int mid){
    for(int i=0;i<n;i++){
        int reqd = v1[i]*mid-v2[i];
        if(reqd>0){
            if(k>=reqd) k-=reqd;
            else return false;
        }
    }
    return true;
}

void solve(){
    int n,k;cin>>n>>k;
    vi v1(n),v2(n);frc(v1,i,n);frc(v2,i,n);
    int l=0,h=INT_MAX;
    int ans = 0;
    while(l<=h){
        int mid = l+(h-l)/2;
        if(check(n,k,v1,v2,mid)){
            ans = mid;
            l = mid+1;
        }
        else h = mid-1;
    }
    cout<<ans<<endl;
}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    solve();
    return 0;
}

    
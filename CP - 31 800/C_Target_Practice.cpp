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
int powerOfTwo(int n) {if (n <= 0) return -1;if ((n & (n - 1)) == 0) return log2(n);else return -1;}

void solve(){
    vector<vector<char>> v(10,vector<char>(10));
    loop(i,0,10){
        loop(j,0,10){
            cin>>v[i][j];
        }
    }
    int ans = 0;
    loop(i,0,10){
        loop(j,0,10){
            if(v[i][j] == '.') continue;
            if(i==0 || j==0 || i==9 || j==9) ans++;
            else if(i==1 || j==1 || i==8 || j==8) ans+=2;
            else if(i==2 || j==2 || i==7 || j==7) ans+=3;
            else if(i==3 || j==3 || i==6 || j==6) ans+=4;
            else if(i==4 || j==4 || i==5 || j==5) ans+=5;
        }
    }
    cout<<ans<<endl;
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

    
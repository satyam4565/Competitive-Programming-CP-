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

void solve(){
    int n;cin>>n;
    if((n-1)%3 ==0 || (n+1)%3 == 0) cout<<"First"<<endl;
    else cout<<"Second"<<endl;    
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

    
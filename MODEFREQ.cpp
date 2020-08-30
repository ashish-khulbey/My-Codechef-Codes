// Problem Link : https://www.codechef.com/LTIME87B/problems/MODEFREQ

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define rep(i,a,b) for(ll i=(a);i<(b);i++)
#define rrep(i,a,b) for(ll i=(a);i>(b);i--)

const int inf = 0x3fffffff; 
const ll INF = 0x1fffffffffffffff;
const ll mod = 1e9+7;

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

ll pow(ll a,ll b)
{
    if(!b)
        return 1;
    ll p = pow(a,b/2);
    if(b%2)
        return (a*((p*p)%mod))%mod;
    else
        return (p*p)%mod;
}

void solve() {
    ll t;
    cin>>t;
    while (t--) {
        ll n;
        map<ll, ll> m2, m1;
        cin>>n;
        ll arr[n];
        ll val;
        // vector <ll> v(11);
        rep(i, 0, n) {
            cin>>val;
            // v[val]++;
            m1[val]++;
        }
        for(auto it=m1.begin();it!=m1.end();it++) {
            m2[it->second]++;
        }
        ll key=100000000;
        val = -1;
        for(auto it=m2.begin();it!=m2.end();it++) {
            if(it->second > val) {
                val = it->second;
                key = it->first;
            }
            else if(it->second == val && it->first < key) {
                key = it->first;
                // val = it->second;
                }
        }
        cout<<key<<endl;
        // ll it = *max_element(all(v));
        // auto index = lower_bound(all(v), it);
        // auto beg = v.begin();
        // auto index = val-beg;
        // cout<<index-beg<<endl;
    }
}

int main() {

    startTime = clock();

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    solve();

    return 0;
}

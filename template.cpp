// Template for CPP

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb(x) push_back(x)
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
    cout<<"Success..."<<endl;
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

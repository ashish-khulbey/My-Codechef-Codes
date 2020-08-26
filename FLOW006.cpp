// Problem Link : https://www.codechef.com/problems/FLOW006

#include<bits/stdc++.h>
# define ll long long

using namespace std;

void solve() {
    ll n,t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        ll ans = 0;
        while (n>0)
        {
            ans += (n % 10);
            n = n / 10;
        }
        cout<<ans<<endl;
    }
    
}

int main() {
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

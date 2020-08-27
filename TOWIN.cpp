// Problem Link : https://www.codechef.com/problems/TOWIN

#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    ll t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n, greater<ll>());
       if (n==1) {
           cout<<"first"<<endl;
       }
       else if (n==2) {
           if (arr[0] > arr[1]) {
               cout<<"first"<<endl;
           }
           else if (arr[0] < arr[1]) {
               cout<<"second"<<endl;
           }
           else {
               cout<<"draw"<<endl;
           }
       }
       else if (n>=3) {
           ll s1=0,s11=0,s2=0,s22=0;
           s11 = arr[0];
           s22 = arr[1] + arr[2];
           for(ll i=3;i<n;i++) {
               if (i%2!=0) {
                   s11 += arr[i];
               }
               else {
                   s22 += arr[i];
               }
           }
           if (s11 > s22) {
               cout<<"first"<<endl;
           }
           else if (s22 > s11) {
               cout<<"second"<<endl;
           }
           else {
               cout<<"draw"<<endl;
           }
       }
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

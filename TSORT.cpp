Problem Link : https://www.codechef.com/problems/TSORT

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	ll arr[t];
	for (ll i=0;i<t;i++) {
	    cin>>arr[i];
	}
	sort(arr, arr+t+1);
	for (ll i=0;i<t;i++) {
	    cout<<arr[i]<<endl;
	}
	return 0;
}

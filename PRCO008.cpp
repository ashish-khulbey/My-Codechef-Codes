Problem Link : https://www.codechef.com/PRCO2017/problems/PRCO008/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,n;
	    cin>>a>>b>>n;
        int gcd = __gcd(a,b);
	    if ((a<n && b<n) || (n%gcd != 0)) {
	        cout<<"NO"<<endl;
	    }
	    else if ((a==n || b==n) || (n%gcd == 0)) {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}

// Problem Link : https://www.codechef.com/problems/HS08TEST

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	float y;
	cin>>x>>y;
	if ((x%5 == 0) && (x+0.5)<=y) {
	    cout<<fixed<<setprecision(2)<<(y-x-0.5)<<endl;
	}
	else {
	    cout<<fixed<<setprecision(2)<<(y)<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

void solve(int a , int b){
	int gcd = __gcd(a,b) ;
	ll lcm = a/gcd * b ;
	cout << gcd << " " << lcm << endl ;
}

int main()
{
	int t ; 
	cin >> t ; 
	while(t--){
		int a , b ; 
		cin >> a >> b ;
		solve(a,b) ; 
	}
}

// do phuc tap thuat toan : O(t * log min(a,b)) do ham __gcd su dung thuat toan Euclid 

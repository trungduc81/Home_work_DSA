#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

void solve(int a){
	string s = to_string(a) ; 
	int m = s.size() - 1 ; 
	if(s[0] != s[m]) cout << "NO" << endl ; 
	else cout << "YES" << endl ; 
}

int main()
{
	int t ; 
	cin >> t ; 
	while(t--){
		int a  ; 
		cin >> a ;
		solve(a) ; 
	}
}


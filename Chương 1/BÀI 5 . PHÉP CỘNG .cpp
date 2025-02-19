#include<bits/stdc++.h>
using namespace std ;

void solve(string &s){
	if( (s[0] - '0') +(s[4] - '0' ) == (s[8] - '0') )cout << "YES" << endl ; 
	else cout << "NO" << endl ; 
}

int main()
{
	int t ;
	cin >> t ; 
	cin.ignore() ; 
	while(t--){
		string s ; 
		getline(cin,s) ; 
		solve(s) ; 
	}
}
// do phuc tap thuat toan : O(1) 

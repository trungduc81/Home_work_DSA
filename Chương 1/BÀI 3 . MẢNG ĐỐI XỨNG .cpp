#include<bits/stdc++.h>
using namespace std ; 

int check(int a[] , int n){
	int l = 0 , r = n - 1 ; 
	while(l <= r){
		if(a[l] == a[r]) {
			l++ ;
			r-- ; 
		}
		else return 0 ; 
	}
	return 1 ; 
}

int main()
{
	int t ; 
	cin >> t ; 
	while(t--){
		int n ; 
		cin >> n ;
		int a[n] ; 
		for(int i = 0 ; i < n ; i++ ){
			cin >> a[i] ;
		}
		if(check(a,n)) cout << "YES" << endl ; 
		else cout << "NO" << endl ; 
	}
}
// do phuc tap thuat toan : O(n) do duyet qua n/2 mang

#include <bits/stdc++.h>
using namespace std;

void solve(string &s){
	stringstream ss(s) ; 
	string word ; 
	vector<string> ve ; 
	while(ss >> word){
		ve.push_back(word) ; 
	}
	for(int i = 0 ; i < ve.size() ; i++ ){
	   ve[i][0] = toupper(ve[i][0]) ; 
	}
	for(auto i : ve) cout << i << " " ; 
	cout << endl ; 
} 

int main() {
    int t;
    cin >> t;
    cin.ignore() ; 
    while (t--) {
        string s;
        getline(cin,s) ; 
        solve(s) ; 
    }
}
// do phuc tap O(n) 
// do phuc tap 

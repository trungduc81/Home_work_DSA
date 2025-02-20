#include <bits/stdc++.h>
using namespace std;

void solve( string &s) {
    unordered_map<char, vector<int>> mp;
    int dem = 0;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]].push_back(i);
    }

    for (char c1 = 'A'; c1 <= 'Z'; c1++) {
        for (char c2 = c1 + 1; c2 <= 'Z'; c2++) {
                int x1 = mp[c1][0], x2 = mp[c1][1];
                int y1 = mp[c2][0], y2 = mp[c2][1];

                if ((x1 < y1 && y1 < x2 && x2 < y2) || (y1 < x1 && x1 < y2 && y2 < x2)) {
                    dem++;
                }
            }
        }
    cout << dem << endl;
}

int main() {
    string s;
    cin >> s; 
    solve(s);
    return 0;
}

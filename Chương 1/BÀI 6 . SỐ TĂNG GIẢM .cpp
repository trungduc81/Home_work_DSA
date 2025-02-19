#include <bits/stdc++.h>
using namespace std;

int solve1(string &s) {
    int m = s.size();
    for (int i = 0; i < m - 1; i++) {
        if (s[i] > s[i + 1]) return 0;
    }
    return 1;
}

int solve2(string &s) {
    int m = s.size();
    for (int i = 0; i < m - 1; i++) {
        if (s[i] < s[i + 1]) return 0;
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (solve1(s) || solve2(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
 

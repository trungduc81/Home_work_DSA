#include <bits/stdc++.h>
using namespace std;

void chuanhoa(string &s) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

void inhoa(string &s) {
    for (char &c : s) {
        c = toupper(c);
    }
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s, word;
        getline(cin, s);
        stringstream ss(s);
        vector<string> ve;

        while (ss >> word) {
            ve.push_back(word);
        }

        inhoa(ve[0]);

        for (int i = 1; i < ve.size(); i++) {
            chuanhoa(ve[i]);
            cout << ve[i];
            if (i == ve.size() - 1) {
                cout << ", ";
            } else {
                cout << " ";
            }
        }
        
        cout << ve[0] << endl;
    }
    return 0;
}

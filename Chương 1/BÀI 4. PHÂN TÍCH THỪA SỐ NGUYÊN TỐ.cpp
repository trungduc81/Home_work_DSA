#include <bits/stdc++.h>
using namespace std;

void prime(int n) {
    int dem = 0;
    while (n % 2 == 0) {
        dem++;
        n /= 2;
    }
    if (dem > 0) cout << "2(" << dem << ") "
    for (int i = 3; i <= sqrt(n); i += 2) {
        dem = 0;
        while (n % i == 0) {
            dem++;
            n /= i;
        }
        if (dem > 0) cout << i << "(" << dem << ") ";
    }
    if (n > 1) cout << n << "(1)";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    int test_case = 1;
    while (t--) {
        int n;
        cin >> n;
        cout << "Test " << test_case << ": ";
        prime(n);
        test_case++;
    }
}


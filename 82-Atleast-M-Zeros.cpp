#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, p = -1e9, x, ok = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1) ok &= (i - p - 1 >= m), p = i;
    }
    cout << (ok ? "true" : "false");
}

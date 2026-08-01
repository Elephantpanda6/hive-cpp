#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int v = n; v >= 1; v--) cout << (v == i ? "*" : to_string(v));
        cout << endl;
    }
}

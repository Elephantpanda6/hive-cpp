#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n * m);
    long long x;
    for (long long &v : a) cin >> v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> x, cout << a[i * m + j] + x << " ";
        cout << endl;
    }
}

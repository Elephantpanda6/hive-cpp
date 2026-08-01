#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> c(m);
    long long x;
    for (int i = 0; i < n * m; i++) cin >> x, c[i % m] += x;
    for (long long v : c) cout << v << endl;
}

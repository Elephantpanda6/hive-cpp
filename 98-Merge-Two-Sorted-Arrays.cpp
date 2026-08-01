#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    cin >> m;
    a.resize(n + m);
    for (int i = n; i < n + m; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for (int x : a) cout << x << " ";
}

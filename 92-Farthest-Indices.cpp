#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ans = 0;
    cin >> n;
    vector<long long> a(n);
    for (long long &x : a) cin >> x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) if (a[j] <= a[i]) ans = max(ans, i - j);
    }
    cout << ans;
}

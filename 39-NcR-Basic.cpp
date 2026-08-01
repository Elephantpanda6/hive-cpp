#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, r;
    cin >> n >> r;
    long long ans = (r >= 0 && r <= n);
    for (long long i = 1; i <= min(r, n - r); i++) ans = ans * (n - i + 1) / i;
    cout << ans;
}

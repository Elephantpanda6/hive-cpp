#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long tot = 0, l = 0;
    for (long long &x : a) cin >> x, tot += x;
    for (long long x : a) cout << abs(l - (tot - l - x)) << " ", l += x;
}

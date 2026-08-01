#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (long long &x : a) cin >> x;
    for (long long x : a) if (x >= 0) cout << x << " ";
    for (long long x : a) if (x < 0) cout << x << " ";
}

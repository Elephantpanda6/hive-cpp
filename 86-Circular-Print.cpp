#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (long long &x : a) cin >> x;
    for (int i = 0; i < n; i++) cout << a[(k + i) % n] << " ";
}

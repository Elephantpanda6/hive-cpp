#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (long long &x : a) cin >> x;
    for (int i = 0; i < n; i++) cout << a[i % 2 ? n - 1 - i / 2 : i / 2] << " ";
}

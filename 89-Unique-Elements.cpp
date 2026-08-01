#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    unordered_map<long long, int> c;
    for (long long &x : a) cin >> x, c[x]++;
    for (long long x : a) if (c[x] == 1) cout << x << " ";
}

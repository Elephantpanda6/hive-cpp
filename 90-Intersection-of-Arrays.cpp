#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n;
    vector<long long> a(n);
    for (long long &x : a) cin >> x;
    cin >> m;
    unordered_set<long long> s;
    long long v;
    while (m--) cin >> v, s.insert(v);
    for (long long x : a) if (s.erase(x)) cout << x << " ";
}

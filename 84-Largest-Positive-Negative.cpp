#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, mx = -1, x;
    cin >> n;
    unordered_set<int> s;
    while (n--) cin >> x, s.count(-x) ? mx = max(mx, abs(x)) : 0, s.insert(x);
    cout << mx;
}

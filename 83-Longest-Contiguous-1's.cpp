#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, c = 0, mx = 0, x;
    cin >> n;
    while (n--) cin >> x, mx = max(mx, c = x ? c + 1 : 0);
    cout << mx;
}

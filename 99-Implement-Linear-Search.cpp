#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, x, ans = -1;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> x, ans = (x == k && ans == -1 ? i : ans);
    cout << ans;
}

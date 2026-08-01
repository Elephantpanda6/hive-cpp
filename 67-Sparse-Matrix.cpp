#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, z = 0, x;
    cin >> n >> m;
    for (int i = 0; i < n * m; i++) cin >> x, z += !x;
    cout << (z > n * m / 2 ? "Yes" : "No");
}

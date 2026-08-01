#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, c = 0;
    long long x;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> x, c += (x % 2 ? 1 : -1);
    cout << (abs(c) <= 1 ? "Yes" : "No");
}

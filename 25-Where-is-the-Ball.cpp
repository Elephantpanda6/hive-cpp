#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, t;
    cin >> n >> t;
    long long r = t % (2 * (n - 1));
    cout << (r < n ? r + 1 : 2 * n - 1 - r);
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, s = 0;
    cin >> n;
    for (long long m = n; m; m /= 10) s += (m % 10) * (m % 10) * (m % 10);
    cout << (s == n ? "Yes" : "No");
}

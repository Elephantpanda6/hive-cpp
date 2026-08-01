#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long s = 0, x;
    for (int i = 0; i < n * n; i++) cin >> x, s += (i % n <= i / n) * x;
    cout << s;
}

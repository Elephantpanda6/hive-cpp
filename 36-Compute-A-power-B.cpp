#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, ans = 1;
    cin >> a >> b;
    while (b--) ans *= a;
    cout << ans;
}

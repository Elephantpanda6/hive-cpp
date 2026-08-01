#include <iostream>
using namespace std;

long long fact(int n) {
    long long f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, r;
    if (cin >> n >> r) {
        if (r < 0 || r > n) {
            cout << 0 << endl;
        } else {
            long long ans = fact(n) / (fact(r) * fact(n - r));
            cout << ans << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    while (n--) {
        long long s = 0, x;
        for (int j = 0; j < m; j++) cin >> x, s += x;
        cout << s << endl;
    }
}

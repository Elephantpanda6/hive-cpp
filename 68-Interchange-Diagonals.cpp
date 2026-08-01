#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> r(n);
        for (int &x : r) cin >> x;
        swap(r[i], r[n - 1 - i]);
        for (int x : r) cout << x << " ";
        cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n1, m1, n2, m2;
    cin >> n1 >> m1;
    vector<vector<long long>> a(n1, vector<long long>(m1));
    for (auto &r : a) for (long long &x : r) cin >> x;
    cin >> n2 >> m2;
    vector<vector<long long>> b(n2, vector<long long>(m2));
    for (auto &r : b) for (long long &x : r) cin >> x;
    if (m1 != n2) {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            long long s = 0;
            for (int k = 0; k < m1; k++) s += a[i][k] * b[k][j];
            cout << s << " ";
        }
        cout << endl;
    }
}

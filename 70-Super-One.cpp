#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>(m));
    for (auto &r : g) for (int &x : r) cin >> x;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            if (g[i][j] == 1 && !g[i-1][j-1] && !g[i-1][j] && !g[i-1][j+1] && !g[i][j-1] && !g[i][j+1] && !g[i+1][j-1] && !g[i+1][j] && !g[i+1][j+1]) {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
}

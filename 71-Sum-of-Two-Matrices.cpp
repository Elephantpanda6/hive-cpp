#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    if (cin >> n >> m) {
        vector<vector<long long>> a(n, vector<long long>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                long long val;
                cin >> val;
                a[i][j] += val;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << (j == m - 1 ? "" : " ");
            }
            cout << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, m1;
    if (cin >> n1 >> m1) {
        vector<vector<int>> a(n1, vector<int>(m1));
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m1; j++) {
                cin >> a[i][j];
            }
        }
        int n2, m2;
        if (cin >> n2 >> m2) {
            vector<vector<int>> b(n2, vector<int>(m2));
            for (int i = 0; i < n2; i++) {
                for (int j = 0; j < m2; j++) {
                    cin >> b[i][j];
                }
            }
            if (m1 != n2) {
                cout << -1 << endl;
            } else {
                vector<vector<int>> c(n1, vector<int>(m2, 0));
                for (int i = 0; i < n1; i++) {
                    for (int j = 0; j < m2; j++) {
                        for (int k = 0; k < m1; k++) {
                            c[i][j] += a[i][k] * b[k][j];
                        }
                    }
                }
                for (int i = 0; i < n1; i++) {
                    for (int j = 0; j < m2; j++) {
                        cout << c[i][j] << (j == m2 - 1 ? "" : " ");
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
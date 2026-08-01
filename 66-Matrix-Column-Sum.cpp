#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    if (cin >> n >> m) {
        vector<int> col_sum(m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int val;
                cin >> val;
                col_sum[j] += val;
            }
        }
        for (int j = 0; j < m; j++) {
            cout << col_sum[j] << endl;
        }
    }
    return 0;
}
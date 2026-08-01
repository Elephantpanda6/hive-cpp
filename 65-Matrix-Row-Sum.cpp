#include <iostream>
using namespace std;

int main() {
    int n, m;
    if (cin >> n >> m) {
        for (int i = 0; i < n; i++) {
            int row_sum = 0;
            for (int j = 0; j < m; j++) {
                int val;
                cin >> val;
                row_sum += val;
            }
            cout << row_sum << endl;
        }
    }
    return 0;
}
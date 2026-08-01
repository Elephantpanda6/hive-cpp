#include <iostream>
using namespace std;

int main() {
    int n, m;
    if (cin >> n >> m) {
        int zero_count = 0;
        for (int i = 0; i < n * m; i++) {
            int val;
            cin >> val;
            if (val == 0) {
                zero_count++;
            }
        }
        if (zero_count > (n * m) / 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
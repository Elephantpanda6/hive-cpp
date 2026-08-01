#include <iostream>
#include <vector>
using namespace std;

bool in_second[2005];
bool printed[2005];

int main() {
    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int m;
        if (cin >> m) {
            for (int i = 0; i < m; ++i) {
                int val;
                cin >> val;
                in_second[val + 1000] = true;
            }
            bool first = true;
            for (int i = 0; i < n; ++i) {
                int val = a[i];
                if (in_second[val + 1000] && !printed[val + 1000]) {
                    if (!first) {
                        cout << " ";
                    }
                    cout << val;
                    printed[val + 1000] = true;
                    first = false;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
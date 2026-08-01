#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    if (cin >> n >> m) {
        vector<int> ones;
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            if (val == 1) {
                ones.push_back(i);
            }
        }
        bool ok = true;
        for (size_t i = 0; i + 1 < ones.size(); ++i) {
            if (ones[i+1] - ones[i] - 1 < m) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        long long max_val = -2e9;
        for (int i = 0; i < n; ++i) {
            long long val;
            cin >> val;
            max_val = max(max_val, val);
        }
        cout << max_val << endl;
    }
    return 0;
}
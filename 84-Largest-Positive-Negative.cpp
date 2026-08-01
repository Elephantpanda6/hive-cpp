#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        unordered_set<int> seen;
        int max_k = -1;
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            if (seen.count(-val)) {
                max_k = max(max_k, abs(val));
            }
            seen.insert(val);
        }
        cout << max_k << endl;
    }
    return 0;
}
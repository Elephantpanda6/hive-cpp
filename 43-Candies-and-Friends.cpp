#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<int> a(n);
        int min_val = 1e9;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] < min_val) {
                min_val = a[i];
            }
        }
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i] - min_val;
        }
        cout << sum << endl;
    }
    return 0;
}
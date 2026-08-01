#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int max_diff = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = n - 1; j > i; --j) {
                if (j - i <= max_diff) {
                    break;
                }
                if (a[i] <= a[j]) {
                    max_diff = j - i;
                    break;
                }
            }
        }
        cout << max_diff << endl;
    }
    return 0;
}
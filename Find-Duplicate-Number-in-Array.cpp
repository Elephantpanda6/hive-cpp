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
        long long duplicate = -1;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (a[i] == a[j]) {
                    duplicate = a[i];
                    break;
                }
            }
            if (duplicate != -1) break;
        }
        cout << duplicate << endl;
    }
    return 0;
}
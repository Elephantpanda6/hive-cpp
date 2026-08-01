#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    if (cin >> n >> k) {
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cout << a[(k + i) % n] << " ";
        }
        cout << endl;
    }
    return 0;
}
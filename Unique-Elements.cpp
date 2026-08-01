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
        bool first = true;
        for (int i = 0; i < n; ++i) {
            int count = 0;
            for (int j = 0; j < n; ++j) {
                if (a[i] == a[j]) {
                    count++;
                }
            }
            if (count == 1) {
                if (!first) {
                    cout << " ";
                }
                cout << a[i];
                first = false;
            }
        }
        cout << endl;
    }
    return 0;
}
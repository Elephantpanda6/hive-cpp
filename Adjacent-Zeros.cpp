#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        bool has_adjacent_zeros = false;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] == 0 && a[i+1] == 0) {
                has_adjacent_zeros = true;
                break;
            }
        }
        if (has_adjacent_zeros) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
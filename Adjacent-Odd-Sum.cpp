#include <iostream>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        int odd_count = 0;
        int even_count = 0;
        for (int i = 0; i < n; ++i) {
            long long val;
            cin >> val;
            if (val % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
        int diff = odd_count - even_count;
        if (diff < 0) {
            diff = -diff;
        }
        if (diff <= 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
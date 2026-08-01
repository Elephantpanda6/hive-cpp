#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        int max_len = 0;
        int current_len = 0;
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            if (val == 1) {
                current_len++;
                max_len = max(max_len, current_len);
            } else {
                current_len = 0;
            }
        }
        cout << max_len << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        int zero_cnt = 0, pos_cnt = 0, neg_cnt = 0;
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            if (val == 0) {
                zero_cnt++;
            } else if (val > 0) {
                pos_cnt++;
            } else {
                neg_cnt++;
            }
        }
        cout << zero_cnt << " " << pos_cnt << " " << neg_cnt << endl;
    }
    return 0;
}
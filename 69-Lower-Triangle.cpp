#include <iostream>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val;
                cin >> val;
                if (j <= i) {
                    sum += val;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
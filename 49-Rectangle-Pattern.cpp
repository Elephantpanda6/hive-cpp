#include <iostream>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        for (int i = 1; i <= n; i++) {
            for (int val = n; val >= 1; val--) {
                if (val == i) {
                    cout << "*";
                } else {
                    cout << val;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
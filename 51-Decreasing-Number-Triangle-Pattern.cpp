#include <iostream>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        for (int i = 1; i <= n; i++) {
            int val = n - i + 1;
            for (int j = 1; j <= i; j++) {
                cout << val;
                if (j < i) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
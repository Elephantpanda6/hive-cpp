#include <iostream>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        int val = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                if (j > 1) cout << " ";
                cout << val;
                val++;
            }
            cout << endl;
        }
    }
    return 0;
}
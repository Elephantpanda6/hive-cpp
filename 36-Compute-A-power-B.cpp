#include <iostream>
using namespace std;

int main() {
    int a, b;
    if (cin >> a >> b) {
        long long ans = 1;
        for (int i = 0; i < b; i++) {
            ans *= a;
        }
        cout << ans << endl;

    }
    return 0;
}
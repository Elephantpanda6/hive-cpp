#include <iostream>
using namespace std;

int main() {
    long long n;
    if (cin >> n) {
        long long ans = (n / 3) + (n / 5) - (n / 15);
        cout << ans << endl;
    }
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    if (cin >> n) {
        if (n == 0) {
            cout << 0 << endl;
            return 0;
        }
        string binary = "";
        while (n > 0) {
            binary += to_string(n % 2);
            n /= 2;
        }
        reverse(binary.begin(), binary.end());
        cout << binary << endl;
    }
    return 0;
}
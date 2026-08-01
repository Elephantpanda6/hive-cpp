#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    if (cin >> s) {
        long long val = 0;
        for (char c : s) {
            val = (val << 1) + (c - '0');
        }
        cout << val << endl;
    }
    return 0;
}
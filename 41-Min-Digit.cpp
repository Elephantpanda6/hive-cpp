#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    if (cin >> s) {
        if (s.length() == 2) {
            cout << s[1] << endl;
        } else {
            char min_digit = '9';
            for (char c : s) {
                if (c < min_digit) {
                    min_digit = c;
                }
            }
            cout << min_digit << endl;
        }
    }
    return 0;
}
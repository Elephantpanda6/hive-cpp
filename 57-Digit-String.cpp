#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    if (getline(cin, s)) {
        if (!s.empty() && s.back() == '\r') {
            s.pop_back();
        }
        bool only_digits = true;
        for (char c : s) {
            if (!isdigit(c)) {
                only_digits = false;
                break;
            }
        }
        if (only_digits) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
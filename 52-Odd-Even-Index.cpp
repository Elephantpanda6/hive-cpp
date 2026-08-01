#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    if (cin >> s) {
        for (int i = 1; i < s.length(); i += 2) {
            cout << s[i];
        }
        for (int i = 0; i < s.length(); i += 2) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
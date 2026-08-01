#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        string s;
        if (cin >> s) {
            int count = 0;
            for (char c : s) {
                if (c == '$' || c == '#' || c == '*') {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}
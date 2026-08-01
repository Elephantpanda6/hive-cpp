#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        string s;
        if (cin >> s) {
            string rev_s = s;
            reverse(rev_s.begin(), rev_s.end());
            if (s == rev_s) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
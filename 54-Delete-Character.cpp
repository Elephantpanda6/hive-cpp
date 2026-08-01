#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, idx;
    if (cin >> n >> idx) {
        string s;
        cin >> s;
        if (idx < 0 || idx >= n) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < idx; i++) {
                cout << s[i];
            }
            for (int i = idx + 1; i < n; i++) {
                cout << s[i];
            }
            cout << endl;
        }
    }
    return 0;
}
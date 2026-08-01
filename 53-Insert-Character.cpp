#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        string s;
        cin >> s;
        char x;
        int idx;
        cin >> x >> idx;
        for (int i = 0; i < idx; i++) {
            cout << s[i];
        }
        cout << x;
        for (int i = idx; i < n; i++) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
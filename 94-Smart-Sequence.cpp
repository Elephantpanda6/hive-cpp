#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<long long> s(n);
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                cout << s[i];
            } else {
                cout << " " << s[i] - s[i - 1];
            }
        }
        cout << endl;
    }
    return 0;
}
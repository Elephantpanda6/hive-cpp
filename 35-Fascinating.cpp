#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
            if (cin >> n) {
                        string s = to_string(n) + to_string(2 * n) + to_string(3 * n);
                                sort(s.begin(), s.end());
                                        cout << (s == "123456789" ? "true" : "false") << endl;
            }
                return 0;
}
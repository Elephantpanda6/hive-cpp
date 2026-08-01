#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    if (cin >> s) {
        vector<int> count(26, 0);
        for (char c : s) {
            if (c >= 'a' && c <= 'z') {
                count[c - 'a']++;
            }
        }
        bool first = true;
        for (int i = 0; i < 26; ++i) {
            if (count[i] > 0) {
                if (!first) {
                    cout << " ";
                }
                cout << count[i];
                first = false;
            }
        }
        cout << endl;
    }
    return 0;
}
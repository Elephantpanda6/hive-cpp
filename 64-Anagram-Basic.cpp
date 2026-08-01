#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    if (cin >> a >> b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b) {
            cout << "TRUE" << endl;
        } else {
            cout << "FALSE" << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    long long n;
    int i;
    if (cin >> n >> i) {
        if ((n >> i) & 1) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}
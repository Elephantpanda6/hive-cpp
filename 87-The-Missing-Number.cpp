#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int val;
    while (cin >> val) {
        sum += val;
    }
    cout << 5050 - sum << endl;
    return 0;
}
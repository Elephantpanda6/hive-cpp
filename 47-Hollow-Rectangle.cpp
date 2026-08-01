#include <iostream>
using namespace std;

int main() {
    int w, l;
    if (cin >> w >> l) {
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < w; j++) {
                if (i == 0 || i == l - 1 || j == 0 || j == w - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
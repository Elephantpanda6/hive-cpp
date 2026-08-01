#include <bits/stdc++.h>
using namespace std;
int main() {
    int w, l;
    cin >> w >> l;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < w; j++) cout << (i == 0 || i == l - 1 || j == 0 || j == w - 1 ? '*' : ' ');
        cout << endl;
    }
}

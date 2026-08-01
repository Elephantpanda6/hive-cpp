#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int x = 2; n; x++) {
        int i = 2;
        while (i * i <= x && x % i) i++;
        if (i * i > x && n--) cout << x << " ";
    }
}

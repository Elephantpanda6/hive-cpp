#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p = 1, x, bad = 0;
    cin >> n;
    while (n--) cin >> x, bad |= (!p && !x), p = x;
    cout << (bad ? "No" : "Yes");
}

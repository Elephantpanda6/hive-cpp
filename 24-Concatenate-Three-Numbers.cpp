#include <bits/stdc++.h>
using namespace std;
int main() {
    string a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3, [](string x, string y) { return x + y > y + x; });
    cout << a[0] << a[1] << a[2];
}

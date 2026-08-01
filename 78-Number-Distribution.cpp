#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, z = 0, p = 0, ng = 0;
    long long x;
    cin >> n;
    while (n--) cin >> x, x == 0 ? z++ : x > 0 ? p++ : ng++;
    cout << z << " " << p << " " << ng;
}

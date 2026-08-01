#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, a = 0, b = 1;
    cin >> n;
    while (n--) b += a, a = b - a;
    cout << a;
}

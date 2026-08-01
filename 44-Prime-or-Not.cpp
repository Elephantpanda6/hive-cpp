#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, i = 2;
    cin >> n;
    while (i * i <= n && n % i) i++;
    cout << (n > 1 && i * i > n ? "Yes" : "No");
}

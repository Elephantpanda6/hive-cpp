#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 18) cout << "Eligible to Vote for " << n - 18 << " year(s)";
    else cout << "Not Eligible, eligible after " << 18 - n << " year(s)";
}

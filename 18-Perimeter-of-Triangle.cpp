#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << (a + b > c && b + c > a && a + c > b ? a + b + c : -1);
}

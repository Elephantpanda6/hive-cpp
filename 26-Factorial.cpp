#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, f = 1;
    cin >> n;
    while (n > 1) f *= n--;
    cout << f;
}

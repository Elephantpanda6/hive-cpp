#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, i;
    cin >> n >> i;
    cout << (((n >> i) & 1) ? "true" : "false");
}

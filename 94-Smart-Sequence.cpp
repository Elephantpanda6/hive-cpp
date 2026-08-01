#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> s(n);
    for (long long &x : s) cin >> x;
    cout << s[0];
    for (int i = 1; i < n; i++) cout << " " << s[i] - s[i - 1];
}

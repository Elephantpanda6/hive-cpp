#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, idx;
    string s;
    cin >> n >> idx >> s;
    if (idx < 0 || idx >= n) cout << -1;
    else cout << s.erase(idx, 1);
}

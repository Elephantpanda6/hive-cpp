#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, idx;
    string s;
    char x;
    cin >> n >> s >> x >> idx;
    cout << s.insert(idx, 1, x);
}

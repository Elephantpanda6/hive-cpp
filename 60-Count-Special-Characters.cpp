#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for (char c : s) if (c == '$' || c == '#' || c == '*') cnt++;
    cout << cnt;
}

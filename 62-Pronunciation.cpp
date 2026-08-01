#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, cur = 0, mx = 0;
    string s, v = "aeiou";
    cin >> n >> s;
    for (char c : s) mx = max(mx, cur = v.find(c) != string::npos ? 0 : cur + 1);
    cout << (mx >= 4 ? "NO" : "YES");
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    cout << (equal(s.begin(), s.end(), s.rbegin()) ? "YES" : "NO");
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long s[3];
    cin >> s[0] >> s[1] >> s[2];
    sort(s, s + 3);
    if (s[0] * s[0] + s[1] * s[1] == s[2] * s[2]) cout << "Yes " << s[2];
    else cout << "No";
}

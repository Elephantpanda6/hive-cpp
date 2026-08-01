#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    reverse(s.begin() + (s[0] == '-'), s.end());
    cout << stoll(s);
}

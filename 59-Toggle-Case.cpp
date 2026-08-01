#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    for (char &c : s) if (isalpha(c)) c ^= 32;
    cout << s;
}

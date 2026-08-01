#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    cout << (all_of(s.begin(), s.end(), ::isdigit) ? "Yes" : "No");
}

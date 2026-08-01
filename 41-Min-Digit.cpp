#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    cout << (s.size() == 2 ? s[1] : *min_element(s.begin(), s.end()));
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i = (s[0] =='-');
    reverse(s.begin() +i,s.end());

    cout << stoll(s);

}
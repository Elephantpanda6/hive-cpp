#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, v = "aeiouAEIOU";
    cin >> s;
    int vc = 0, cc = 0;
    for (char c : s) if (isalpha(c)) v.find(c) != string::npos ? vc++ : cc++;
    cout << vc << " " << cc;
}

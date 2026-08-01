#include <bits/stdc++.h>
using namespace std;
int main() {
    string p, sp = "!@#$%^&*()-+";
    cin >> p;
    int d = 1, l = 1, u = 1, s = 1;
    for (char c : p) {
        if (isdigit(c)) d = 0;
        else if (islower(c)) l = 0;
        else if (isupper(c)) u = 0;
        else if (sp.find(c) != string::npos) s = 0;
    }
    cout << max(d + l + u + s, 6 - (int)p.size());
}

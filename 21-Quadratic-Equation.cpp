#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    if (d < 0) cout << "Imaginary Roots";
    else cout << fixed << setprecision(2) << (-b + sqrt(d)) / (2 * a) << " " << (-b - sqrt(d)) / (2 * a);
}

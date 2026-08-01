#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int s = a + b + c + d + e;
    cout << "Total Marks = " << s << endl << "Percentage = " << fixed << setprecision(2) << s / 5.0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    double p;
    cin >> p;
    int d = p >= 20000 ? 20 : p >= 15000 ? 15 : p >= 10000 ? 10 : 0;
    if (!d) cout << "No Discount Applicable";
    else {
        double da = p * d / 100;
        cout << fixed << setprecision(2);
        cout << "Total Purchase Price = Rs " << p << endl;
        cout << "Discount Percentage = " << d << "%" << endl;
        cout << "Discount Amount = Rs " << da << endl;
        cout << "Final Amount = Rs " << p - da << endl;
    }
}

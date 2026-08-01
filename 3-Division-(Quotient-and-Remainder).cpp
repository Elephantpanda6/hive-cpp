#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int q= a / b;
    int r= a % b;
    cout << "Quotient = " << q << ", Remainder = " << r;
    return 0;
}
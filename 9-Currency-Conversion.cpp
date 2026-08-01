#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    n /=85.000;
    cout << fixed << setprecision(3) << round(n * 1000.000) / 1000.000;  
    return 0;
}
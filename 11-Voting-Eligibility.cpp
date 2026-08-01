#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n >= 18)
        cout << "Eligible to Vote for " << n-18 << " year(s)";
    else
        cout << "Not Eligible, eligible after " << abs(n-18) << " year(s)";   
    return 0;
}
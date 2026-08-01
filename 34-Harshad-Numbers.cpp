#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,s;
    cin >> n;
    for(m=n;m;m/=10) s += m % 10;
    cout << (n % s ==0 ? "Yes" : "No");

}
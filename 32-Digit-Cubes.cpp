#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,s;
    cin >> n;
    m =n;
    while(m){
        int d= m% 10;
        s += d*d*d;
        m /= 10;
    }

    cout << (s == n ? "Yes" : "No");
}
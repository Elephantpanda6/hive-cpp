#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,a,r;
    cin >> n >> a >>r;

    while(n--){
        cout << a << " ";
        a *= r;
    }
}
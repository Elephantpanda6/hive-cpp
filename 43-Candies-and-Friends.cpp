#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (long long &x : a) cin >> x;
    cout << accumulate(a.begin(), a.end(), 0LL) - *min_element(a.begin(), a.end()) * n;
}

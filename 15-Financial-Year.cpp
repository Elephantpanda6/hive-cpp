#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << "Month-" << n << " falls under Quarter-" << (n <= 3 ? 4 : (n - 1) / 3);
}

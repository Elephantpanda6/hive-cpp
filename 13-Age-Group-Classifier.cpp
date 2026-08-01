#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << (n <= 13 ? "Child" : n <= 19 ? "Teen" : n <= 59 ? "Adult" : "Senior Citizen");
}

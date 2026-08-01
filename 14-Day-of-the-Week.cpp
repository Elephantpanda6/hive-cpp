#include <bits/stdc++.h>
using namespace std;
int main() {
    int d;
    cin >> d;
    string w[] = {"", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout << "The " << d << (d == 1 ? "st" : d == 2 ? "nd" : d == 3 ? "rd" : "th") << " Day of the week is " << w[d];
}

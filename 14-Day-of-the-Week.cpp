#include <bits/stdc++.h>
using namespace std;

int main() {
    int d;cin >> d;

    string days[] = {"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    string suf[] = {"","st","nd","rd","th","th","th","th"};

    cout << "The " << d << suf[d] << " Day of the week is " << days[d];
}
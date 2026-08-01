#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,e;
    cin >>a>>b>>c>>d>>e;
    int marks = a+b+c+d+e;
    float p = marks / 5.0;
    cout << "Total Marks = " << marks << endl;
    cout << "Percentage = " << fixed << setprecision(2) << p;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    double p;
    cin >>p;

    int d = 0;
    if(p >= 20000){
        d=20;
    }else if(p >= 15000){
        d=15;
    }else if(p>= 10000){
        d=10;
    }

    if(d ==0){
        cout << "No Discount Applicable";
    }else{
        double da=(p*d) / 100.0;
        double fa = p-da;

        cout << fixed << setprecision(2);

        cout << "Total Purchase Price = Rs " << p << endl;
        cout << "Discount Percentage = " << d << "%\n";
        cout << "Discount Amount = Rs "  << da << endl;
        cout << "Final Amount = Rs " << fa << endl;

    }
    return 0;
}
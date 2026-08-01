#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,c;
    cin >>a >>b >> c;
    double d=(b*b) -(4*a*c);
    if(d<0){
        cout << "Imaginary Roots";
    }else{
        double r1 = (-b + sqrt(d)) / (2*a);
        double r2 = (-b - sqrt(d)) / (2*a);

        cout << fixed << setprecision(2);
        cout << r1 << " " << r2;
        

    }
    return 0;
}
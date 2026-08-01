#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if((a*a) + (b*b) == (c*c)){
        cout << "Yes " << c;
    }else{
        cout << "No";
    }

    return 0;
}
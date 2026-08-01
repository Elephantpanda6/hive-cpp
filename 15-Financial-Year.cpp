#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n <=3){
        cout << "Month-" << n << " falls under Quarter-4";
    }else if(n <= 6){
        cout << "Month-" << n << " falls under Quarter-1";

    }else if(n <= 9){
        cout << "Month-" << n << " falls under Quarter-2";
    }else{
        cout << "Month-" << n << " falls under Quarter-3";
    }
    return 0;
}
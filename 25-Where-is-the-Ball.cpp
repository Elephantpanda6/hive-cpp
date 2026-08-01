#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    cin >> n >> t;
    int c=2*(n-1);
    int r = t % c;

    if(r < n){
        cout << r +1;
    }else{
        cout << 2*n -1 -r;
    }
}
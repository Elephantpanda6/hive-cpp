#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,val;
    cin >> n >> k;

    for(int i=0;i<n;i++){
        cin >> val;
        if(val ==k){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
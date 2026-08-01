#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >>n>>k;
    vector<int> a(n);
    for(int &x:a) cin >> x;

    int low =0, high = n-1;
    while(low <= high){
        int mid = low +(high-low) /2;
        cout << low << " " << high << " " << mid << endl;

        if(a[mid] ==k){
            cout << "True\n";
            return 0;
        }
        if(a[mid] <k) low = mid +1;
        else high = mid-1;
    }

    cout << "False\n";
    return 0;
}
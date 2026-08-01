#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int&x:a) cin >> x;

    for(int i=0;i<n-1;i++){
        swap(a[i],*min_element(a.begin()+i,a.end()));
        for (int x:a) cout << x << " ";
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int &x:a) cin >> x;

    for(int i=1;i<n;i++){
        for(int j=i;j>0 && a[j-1] > a[j];j--){
            swap(a[j],a[j-1]);
        }
        for(int x:a) cout <<x << " ";
        cout << endl;
    }
}
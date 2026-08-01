#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    vector<int> a(n);
    for(int &x:a) cin >> x;

    cin >> m;
    vector<int> b(m);
    for(int &x:b) cin >> x;

    vector<int> res(n+m);
    merge(a.begin(),a.end(),b.begin(),b.end(),res.begin());

    for(int x:res) cout << x << " ";


}
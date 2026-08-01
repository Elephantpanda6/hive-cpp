#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    return a+b < b+ a;
}

int main() {
    string arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3,compare);
    cout << arr[2] <<arr[1] << arr[0];

}
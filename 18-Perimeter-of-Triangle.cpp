#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >>a>>b>>c;
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr,arr+3);
    if(arr[0] + arr[1] > arr[2]){
        cout << a+b+c;
    }else{
        cout << "-1";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n <= 13){
        cout << "Child";
    }else if(n <=19){
        cout <<"Teen";
    }else if(n <= 59){
        cout << "Adult";
    }else{
        cout << "Senior Citizen";
    }
    return 0;
}
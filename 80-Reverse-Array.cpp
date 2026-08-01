#include <iostream>
using namespace std;

void printReverse(int i, int n, int* arr) {
    if (i == n) return;
    printReverse(i + 1, n, arr);
    cout << arr[i];
    if (i > 0) cout << " ";
}

int main() {
    int n;
    if (cin >> n) {
        int* arr = new int[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        printReverse(0, n, arr);
        cout << endl;
        delete[] arr;
    }
    return 0;
}
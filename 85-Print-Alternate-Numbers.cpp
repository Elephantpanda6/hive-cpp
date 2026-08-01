#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int left = 0, right = n - 1;
        bool turn = true;
        while (left <= right) {
            if (turn) {
                cout << a[left] << " ";
                left++;
            } else {
                cout << a[right] << " ";
                right--;
            }
            turn = !turn;
        }
        cout << endl;
    }
    return 0;
}
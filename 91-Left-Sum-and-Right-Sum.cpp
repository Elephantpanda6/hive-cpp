#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<long long> a(n);
        long long total_sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_sum += a[i];
        }
        long long leftSum = 0;
        for (int i = 0; i < n; ++i) {
            long long rightSum = total_sum - leftSum - a[i];
            long long diff = leftSum - rightSum;
            if (diff < 0) {
                diff = -diff;
            }
            if (i > 0) {
                cout << " ";
            }
            cout << diff;
            leftSum += a[i];
        }
        cout << endl;
    }
    return 0;
}
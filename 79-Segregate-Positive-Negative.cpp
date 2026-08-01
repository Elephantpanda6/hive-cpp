#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<int> non_neg;
        vector<int> neg;
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            if (val >= 0) {
                non_neg.push_back(val);
            } else {
                neg.push_back(val);
            }
        }
        bool first = true;
        for (int val : non_neg) {
            if (!first) cout << " ";
            cout << val;
            first = false;
        }
        for (int val : neg) {
            if (!first) cout << " ";
            cout << val;
            first = false;
        }
        cout << endl;
    }
    return 0;
}
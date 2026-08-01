#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<vector<int>> grid(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            swap(grid[i][i], grid[i][n - 1 - i]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << grid[i][j] << (j == n - 1 ? "" : " ");
            }
            cout << endl;
        }
    }
    return 0;
}
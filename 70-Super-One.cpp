#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    if (cin >> n >> m) {
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        
        bool found = false;
        for (int i = 1; i < n - 1; i++) {
            for (int j = 1; j < m - 1; j++) {
                if (grid[i][j] == 1) {
                    if (grid[i-1][j-1] == 0 && grid[i-1][j] == 0 && grid[i-1][j+1] == 0 &&
                        grid[i][j-1] == 0 && grid[i][j+1] == 0 &&
                        grid[i+1][j-1] == 0 && grid[i+1][j] == 0 && grid[i+1][j+1] == 0) {
                        found = true;
                        break;
                    }
                }
            }
            if (found) break;
        }
        
        if (found) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
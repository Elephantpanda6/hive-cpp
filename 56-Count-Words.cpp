#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        string dummy;
        getline(cin, dummy);
        string s;
        if (getline(cin, s)) {
            stringstream ss(s);
            string word;
            int count = 0;
            while (ss >> word) {
                count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}
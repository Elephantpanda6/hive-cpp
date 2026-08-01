#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    if (cin >> s) {
        for (char &c : s) {
            if (isupper(c)) {
                c = tolower(c);
            } else if (islower(c)) {
                c = toupper(c);
            }
        }
        cout << s << endl;
    }
    return 0;
}
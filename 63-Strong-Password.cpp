#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isSpecial(char c) {
    string specials = "!@#$%^&*()-+";
    return specials.find(c) != string::npos;
}

int main() {
    string p;
    if (cin >> p) {
        bool has_digit = false;
        bool has_lower = false;
        bool has_upper = false;
        bool has_special = false;
        for (char c : p) {
            if (isdigit(c)) has_digit = true;
            else if (islower(c)) has_lower = true;
            else if (isupper(c)) has_upper = true;
            else if (isSpecial(c)) has_special = true;
        }
        int missing_types = 0;
        if (!has_digit) missing_types++;
        if (!has_lower) missing_types++;
        if (!has_upper) missing_types++;
        if (!has_special) missing_types++;
        
        int n = p.length();
        int ans = max(missing_types, 6 - n);
        cout << ans << endl;
    }
    return 0;
}
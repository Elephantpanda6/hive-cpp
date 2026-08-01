#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    int n;
    if (cin >> n) {
        string s;
        if (cin >> s) {
            int consecutive_consonants = 0;
            bool easy = true;
            for (char c : s) {
                if (isVowel(c)) {
                    consecutive_consonants = 0;
                } else {
                    consecutive_consonants++;
                    if (consecutive_consonants >= 4) {
                        easy = false;
                    }
                }
            }
            if (easy) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
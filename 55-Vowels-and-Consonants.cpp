#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    char lc = tolower(c);
    return lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u';
}

int main() {
    string s;
    if (cin >> s) {
        int vowels = 0, consonants = 0;
        for (char c : s) {
            if (isalpha(c)) {
                if (isVowel(c)) vowels++;
                else consonants++;
            }
        }
        cout << vowels << " " << consonants << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (cin >> n) {
        vector<int> primes;
        int limit = 10000;
        vector<bool> is_prime(limit, true);
        is_prime[0] = is_prime[1] = false;
        for (int p = 2; p * p < limit; p++) {
            if (is_prime[p]) {
                for (int i = p * p; i < limit; i += p)
                    is_prime[i] = false;
            }
        }
        for (int p = 2; p < limit; p++) {
            if (is_prime[p]) {
                primes.push_back(p);
            }
        }
        for (int i = 0; i < n; ++i) {
            cout << primes[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
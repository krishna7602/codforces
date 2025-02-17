#include <iostream>
#include <vector>
using namespace std;

void sieve(vector<int> &primes, int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
}

bool findPrimePair(int n) {
    vector<int> primes;
    sieve(primes, n);

    int left = 0, right = primes.size() - 1;

    while (left <= right) {
        int sum = primes[left] + primes[right];
        if (sum == n) {
            cout << primes[left] << " " << primes[right] << endl;
            return true;
        }
        (sum < n) ? left++ : right--;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    if (!findPrimePair(n)) cout << "-1" << endl;

    return 0;
}

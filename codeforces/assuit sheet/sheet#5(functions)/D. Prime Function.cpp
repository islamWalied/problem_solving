#include <iostream>

using namespace std;

bool isPrime(long long x) {
    if (x < 2) {
        return false;
    }

    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long N, x;
    cin >> N;

    while (N--) {
        cin >> x;
        if (isPrime(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
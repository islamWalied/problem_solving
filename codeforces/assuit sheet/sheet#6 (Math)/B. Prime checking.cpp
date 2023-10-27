#include <iostream>
#include <cmath>

using namespace std;

bool primecheck(long long number) {
    if (number == 2) {
        return true;
    }
    if (number < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long num;
    cin >> num;

    if (primecheck(num)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
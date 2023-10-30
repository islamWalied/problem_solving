#include <iostream>

using namespace std;

int main() {
    long long A;
    cin >> A;
    for (long long i = 1;; ++i) {
        if (i > A)
        {
            cout << i-1;
            return 0;
        } else {
            A -= i;
        }
    }
}
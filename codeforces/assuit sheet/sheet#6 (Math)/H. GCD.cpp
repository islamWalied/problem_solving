#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long A, B;
    cin >> A >> B;

    long long G = gcd(A, B);
    long long L = lcm(A, B);

    cout << G << " " << L << endl;

    return 0;
}
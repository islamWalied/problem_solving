#include <iostream>

using namespace std;

int main() {
    long long A, B, Q;
    cin >> A >> B >> Q;

    long long result = Q % 3;
    if (result == 1) {
        cout << A;
    } else if (result == 2) {
        cout << B;
    }
    else {
        cout << (A ^ B) << endl;
    }
    return 0;
}
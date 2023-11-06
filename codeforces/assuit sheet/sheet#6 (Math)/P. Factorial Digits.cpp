#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    double numDigits = 0;
    for (int i = 1; i <= N; i++) {
        numDigits += log10(i);
    }

    int result = floor(numDigits) + 1;

    cout << "Number of digits of " << N << "! is " << result << endl;

    return 0;
}
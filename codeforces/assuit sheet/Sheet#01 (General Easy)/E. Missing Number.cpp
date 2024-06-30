#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Calculate the expected sum of numbers from 1 to n
    long long expectedSum = (long long)n * (n + 1) / 2;
    long long actualSum = 0;
    int num;

    // Read n-1 numbers and calculate their sum
    for (int i = 0; i < n - 1; ++i) {
        cin >> num;
        actualSum += num;
    }

    // The missing number is the difference between the expected sum and the actual sum
    cout << (expectedSum - actualSum) << endl;

    return 0;
}

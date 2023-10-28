#include <iostream>

using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;
    if (A> B)
        swap(A,B);
    if (A < 1 || B < 1)
        return 0;
    //here we minus the A from B because everytime we will not start from 1 we can start from any number so we minus it
    long long sumAll = (B - A + 1) * (A + B) / 2;

    // Calculate the sum of even numbers
    long long firstEven = (A % 2 == 0) ? A : A + 1;
    long long lastEven = (B % 2 == 0) ? B : B - (B % 2);
    long long sumEven = ((lastEven - firstEven) / 2 + 1) * (firstEven + lastEven) / 2;

    // Calculate the sum of odd numbers
    long long firstOdd = (A % 2 == 0) ? A + 1 : A;
    long long lastOdd = (B % 2 == 0) ? B - 1 : B;
    long long sumOdd = ((lastOdd - firstOdd) / 2 + 1) * (firstOdd + lastOdd) / 2;

    cout << sumAll << endl;
    cout << sumEven << endl;
    cout << sumOdd << endl;

    return 0;
}

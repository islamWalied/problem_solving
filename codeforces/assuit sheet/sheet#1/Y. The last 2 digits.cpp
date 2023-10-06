#include <iostream>
#include <string>

using namespace std;

int main() {
    long long sum, a, b, c, d;
    cin >> a >> b >> c >> d;
    sum = (a%100) * (b%100) * (c%100) * (d%100);
    sum = sum % 100;
    if (sum < 10) {

        cout << "0" << sum;

    }
    else {

        cout << sum;
    }
}
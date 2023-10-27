#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num,x;
    cin >> num;
//    num = pow(2,x);
    x = log2(num);
    long long y = x;
    if (x-y == 0)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

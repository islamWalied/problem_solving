#include <iostream>
#include <string>

using namespace std;

int main() {
    long long num;
    cin >> num;
    num = num / 1000;
    if (num % 2 ==0)
        cout << "EVEN";
    else
        cout << "ODD";
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    long long num1,num2;
    char sign = '+';
    cin >> num1 >> sign >> num2;
    switch (sign) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
    }
}
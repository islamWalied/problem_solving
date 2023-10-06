#include <iostream>
#include <string>

using namespace std;

int main() {
    long long num1 ,num2,num3;
    char sign1, sign2;
    cin >> num1 >> sign1 >> num2 >> sign2 >> num3;
    switch (sign1) {
        case '+':
            if(num1 + num2 == num3)
            {
                cout << "Yes";
            }
            else{
                cout << num1 + num2;
            }
            break;
        case '-':
            if(num1 - num2 == num3)
            {
                cout << "Yes";
            }
            else{
                cout << num1 - num2;
            }
            break;
        case '*':
            if(num1 * num2 == num3)
            {
                cout << "Yes";
            }
            else{
                cout << num1 * num2;
            }
            break;
    }
}
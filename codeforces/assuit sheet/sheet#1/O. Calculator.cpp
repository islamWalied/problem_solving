#include <iostream>
#include <string>

using namespace std;

int main() {
    char a;
    cin >> a;
    if(a >= 48 && a <= 57)
    {
        cout << "IS DIGIT";
    }
    if(a >= 65 && a <= 90) {
        cout << "ALPHA\n";
        cout << "IS CAPITAL";
    }
    else if(a >= 97 && a <= 122) {
        cout << "ALPHA\n";
        cout << "IS SMALL";
    }
}
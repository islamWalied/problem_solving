#include <iostream>
#include <string>

using namespace std;

int main() {
    char a;
    cin >> a;
    if (a >= 65 && a < 97)
        cout << char (a+32);
    if (a >= 97)
        cout << char (a-32);
}
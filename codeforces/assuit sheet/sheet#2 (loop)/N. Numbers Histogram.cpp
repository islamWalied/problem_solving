#include <iostream>

using namespace std;

int main() {
    char s;
    long long  a, b;
    cin >> s;
    cin >> a;
    for (int i = 0; i < a; ++i) {
        cin >> b;
        if (s == '+')
        {
            for (int j = 0; j < b; ++j) {
                cout << "+";
            }
        }
        else if (s == '-')
        {
            for (int j = 0; j < b; ++j) {
                cout << "-";
            }
        }
        else if (s == '/')
        {
            for (int j = 0; j < b; ++j) {
                cout << "/";
            }
        }
        else if (s == '*')
        {
            for (int j = 0; j < b; ++j) {
                cout << "*";
            }
        }
        cout << endl;
    }
}

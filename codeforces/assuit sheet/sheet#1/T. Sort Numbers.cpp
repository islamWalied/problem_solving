#include <iostream>
#include <string>


using namespace std;
int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        if (b >= c) {
            cout << c << endl;
            cout << b << endl;
            cout << a << endl;
        }
        else {
            cout << b << endl;
            cout << c << endl;
            cout << a << endl;
        }
    }
    else if(b >= c && b >= a) {
        if (a >= c) {
            cout << c << endl;
            cout << a << endl;
            cout << b << endl;
        }
        else {
            cout << a << endl;
            cout << c << endl;
            cout << b << endl;
        }
    }
    else if (c >= b && c >= a) {
        if (b >= a) {
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
        else {
            cout << b << endl;
            cout << a << endl;
            cout << c << endl;
        }
    }
    cout << endl << a << endl << b << endl << c << endl;
}
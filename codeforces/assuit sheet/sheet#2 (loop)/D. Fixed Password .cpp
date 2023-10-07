#include <iostream>

using namespace std;

int main() {
    long long a,x;
    cin >> x;
    for (int i = 0; i < x; ++i) {
        cin >> a;
        if(a == 1999) {
            cout << "Correct\n";
            break;
        }
        else
            cout << "Wrong\n";
    }
}


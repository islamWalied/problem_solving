#include <iostream>

using namespace std;

int main() {
    long long a,c = 0;
    cin >> a;
    for (int i = 2; i < a; ++i) {
        if (a == 2) {
            cout << "YES";
            break;
        }
        if (a % i == 0)
        {
            c++;
        }
    }
    if (c != 0 || a == 1)
        cout <<"NO";
    else
        cout << "YES";
}
#include <iostream>

using namespace std;

int main() {
    long long a,x;
    cin >> a;
    while(a--)
    {
        long long product = 1;
        cin >> x;
        for (int i = 1; i <= x; ++i) {
            product *= i;
            if (x == 0)
                cout << 1 << endl;
        }
        cout << product <<endl;
    }
}
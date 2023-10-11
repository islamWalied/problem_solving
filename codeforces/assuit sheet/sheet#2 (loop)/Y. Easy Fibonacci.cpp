#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a,current = 0;
    cin >> a;

    if (a <= 0 || a == 1)
        cout << 0;
    else
    {
        cout << "0 1 ";
        long long oneback = 1, twoback = 0;
        for (int i = 2; i < a; ++i) {
            current = oneback + twoback;
            twoback = oneback;
            oneback = current;
            cout << oneback << " ";
        }
    }
}

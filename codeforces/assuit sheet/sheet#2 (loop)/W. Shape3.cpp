#include <iostream>

using namespace std;

int main() {
    long long a;
    cin >> a;
    if (a >=1 && a <=99)
    {
        for (int z = 1; z <= a; ++z) {
            for (int i = a - 1; i >= z; i--) {
                cout << " ";
            }
            for (int j = 1; j < z * 2; j++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int z = a; z >= 1; --z) {
            for (int i = z; i <= a-1 ; i++) {
                cout << " ";
            }
            for (int j = z * 2; j > 1; j--) {
                cout << "*";
            }
            cout << endl;
        }
    }

}

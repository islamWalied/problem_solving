#include <iostream>

using namespace std;

int main() {
    long long a,x,b,y=0;
    cin >> a;
    if (a >= 1 && a <= 10) {
        for (int i = 0; i < a; ++i) {
            cin >> x;
            if (x == 0){
                cout << 0 << " ";
            }
            else {
                while (x > 0) {
                    y = 0;
                    b = x % 10;
                    y = y * 10 + b;
                    cout << y << " ";
                    x /= 10;
                }
            }
            cout << endl;

        }
    }

}

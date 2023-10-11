#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a, x,y,c = 0;
    cin >> a >> x;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= a; j++) {
            y = x - i - j;
            //  x + y + z = s
            //  x = s - y - z
            if (y >= 0 && y <= a) {
                c++;
            }
        }
    }
    cout << c << endl;
}

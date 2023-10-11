#include <iostream>

using namespace std;

int main() {
    long long a,x,y;
    cin >> a;
    if (a >=1 && a <= 10) {
        for (int i = 0; i < a; ++i) {
            cin >> x >> y;
            if (x < y)
                swap(x,y);
            long long sum =0;
            for (int j = y+1; j < x; ++j) {
                if (j %2 != 0)
                    sum += j;
            }
            cout << sum << endl;
        }
    }
}

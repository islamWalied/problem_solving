#include <iostream>

using namespace std;

int main() {
    long long a, b,c=-1;
    cin >> a >> b;
    if (a > b)
        swap(a,b);
    for (int i = a; i <= b; ++i) {
        int lucky = 0,y=i;
        while(y)
        {
            if ((y % 10 != 4) && (y % 10 != 7))
                lucky++;
            y /= 10;

        }
        if (lucky == 0) {
            cout << i << " ";
            c++;
        }
    }
    if (c == -1) {
        cout << -1;
    }
}

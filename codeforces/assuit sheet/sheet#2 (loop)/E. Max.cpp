#include <iostream>

using namespace std;

int main() {
    long long a,x,max = INT16_MIN;
    cin >> a;
    for (int i = 0; i < a; ++i) {
        cin >> x;
        if (x > max)
            max = x;
    }
    cout << max;
}
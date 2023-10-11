#include <iostream>

using namespace std;

int main() {
    long long a;
    cin >> a;
    for (int i = 1; i <= a * 4; ++i) {
        if (i %4 == 0)
            cout << "PUM" <<endl;
        else
            cout << i << " ";
    }

}

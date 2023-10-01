#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if(a < b)
        swap(a,b);
    if (a % b == 0) {
        cout << "Multiples";
    } else {
        cout << "No Multiples";
    }
}
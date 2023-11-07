#include <iostream>
#include <cmath>

using namespace std;
int main() {

    long long A,B,C,product = 1;
    cin >>A >> B >> C;
    if (B < A)
        swap(A,B);
    if (A >= 1) {
        for (int i = A; i <= B; ++i) {
            product *= (i);
            product %= C;
        }
    }
    cout << product << endl;

}
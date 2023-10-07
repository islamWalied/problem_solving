#include <iostream>

using namespace std;

int main() {
    long long a,c = 0, n,m;
    cin >> a;
    m = a;
    while(a != 0){
        n = a % 10;
        c = c * 10 + n;
        a /= 10;
    }
    if (c == m)
        cout << c <<endl << "YES";
    else
        cout << c <<endl << "NO";
}
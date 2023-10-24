#include <iostream>

using namespace std;


void ntimes( long long x,char c) {
    for (int i = 0; i < x; ++i) {
        cout << c << " ";
    }
}


int main() {
    int n,x;
    char c;
    cin >> n;
    while (n--)
    {
        cin >> x >> c;
        ntimes(x,c);
        cout << endl;
    }

}
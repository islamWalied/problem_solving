#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a, b,c;
    cin >> a >> b >> c;
    cout << min(a,min(b,c))<< " " << max(a,max(b,c));
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long x, y, z, w;
    cin >> x >> y >> z >> w;
    if (y * log(x) > w * log(z)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
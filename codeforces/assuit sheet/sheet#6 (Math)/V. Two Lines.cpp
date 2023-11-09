#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    long long x1,y1,x2,y2,x3,y3,x4,y4,slope1 = 0,slope2 = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (x2 == 0 || (x2 - x1 == 0))
        slope1 = 0;
    else
        slope1 = (y2 - y1) / (x2 - x1);

    if (x4 == 0 || (x4 - x3 == 0))
        slope2 = 0;
    else
        slope2 = (y4 - y3) / (x4 - x3);

    if (slope1 == slope2)
        cout << "YES";
    else
        cout << "NO";
}
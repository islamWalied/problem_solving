#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

bool isInside(long long circle_x, long long circle_y,
              long long rad, long long x, long long y)
{
    // Compare radius of circle with distance
    // of its center from given polong long
    if ((x - circle_x) * (x - circle_x) +
        (y - circle_y) * (y - circle_y) <= rad * rad)
        return true;
    else
        return false;
}


int main() {
    long long x,y,r,n,t,o;
    cin >> x >> y >> r >> n;
    while (n--)
    {
        cin >> t >> o;
        if (isInside(x,y,r,t,o))
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

}
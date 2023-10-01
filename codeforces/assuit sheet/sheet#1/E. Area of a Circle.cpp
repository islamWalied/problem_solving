#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(9);
    double a,area = 0;
    cin >> a;
    area = 3.141592653 * a * a;
    cout << area;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    long long l1 ,l2,r1,r2,d,e;
    cin >> l1  >> r1  >> l2 >> r2;
    if ((l2 < l1 && r2 < l1) || (r1 < l2 && r1 < r2))
    {
        cout << -1;
    }
    else {
        if (l1 > l2)
            d = l1;
        else
            d = l2;

        if (r1 < r2)
            e = r1;
        else
            e = r2;
        cout << d << " " << e;
    }

}
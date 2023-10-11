#include <iostream>

using namespace std;

int main() {

    while (true)
    {
        long long a,x,b,sum = 0;
        cin >> a >> b;
        if (a <=0 || b <= 0)
        {
            return 0;
        } else {
            if (a > b)
                swap(a,b);

            for (int i = a; i <= b; ++i) {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum <<endl;
        }
    }
}

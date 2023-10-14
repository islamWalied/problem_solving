#include <iostream>
const long long N = 1e5;
using namespace std;

int main(){
    long long a,current = 0;
    cin >> a;

    if (a <= 1)
        cout << 0;
    else if (a == 2)
    {
        cout << 1;
    }
    else
    {
        long long oneback = 1, twoback = 0, count = 0;
        for(int i = 3;i <= a;++i) {
            current = oneback + twoback;
            twoback = oneback;
            oneback = current;
            count = current;
        }
        cout  << count;
    }
}
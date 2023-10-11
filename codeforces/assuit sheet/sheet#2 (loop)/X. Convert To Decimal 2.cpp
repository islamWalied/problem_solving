#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a,x,y;
    cin >> a;
    for (int i = 0; i < a; ++i) {
        cin >> x;
        long long count = 0,j = 0;

        while (x > 0)
        {

//            y = x  / 2;
            if (x % 2 != 0){
                count += pow(2,j);
                j++;
            }
            x /= 2;
        }
        cout <<count <<endl;
    }

}

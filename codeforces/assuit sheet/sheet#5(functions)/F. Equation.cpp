#include <iostream>

using namespace std;
long long pow(long long x,long long y)
{
    long long sum = 1;
    for (int i = 1; i <= y; ++i) {
        sum *= x;
    }
    return sum;
}

long long equation(long long x,long long y) {
    long long sum = 0;
    for (int i = 0; i <= y; ++i) {
        if (i%2 == 0)
        {
            if (i == 0)
            {
                sum += pow(x,i) - 1;
            }
            else {
                sum += pow(x,i);
            }
        }
    }
    return sum;
}


int main() {
    long long N, x;
    cin >> N >> x;
    cout << equation(N,x);
}
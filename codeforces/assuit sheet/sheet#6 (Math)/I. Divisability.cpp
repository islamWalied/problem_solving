#include <iostream>

using namespace std;
long long sum(long long n)
{
    return n*(n+1) /2;
}

int main() {
    long long A, B, C;
    cin >> A >> B >> C;
    long long ma = max(A,B);
    long long mi = min(A,B);
    cout << (sum(ma/C)*C) - (sum((mi-1) / C) *C);
    return 0;
}
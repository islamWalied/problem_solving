#include <iostream>

using namespace std;

int main() {
    long long sum = 0, a ,b ,c,t;
    cin >> c >> a >> b;
    for (int i = 1; i <= c; ++i) {
        t = i;
        long long sum_tany = 0;
        while (t)
        {
            sum_tany += t%10;
            t /= 10;
        }
        if (sum_tany >= a && sum_tany <= b)
        {
            sum += i;
        }
    }
    cout << sum;
}

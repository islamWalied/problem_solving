#include <iostream>

using namespace std;

int main() {
    long long a,even = 0,x,odd = 0,positive = 0,negative = 0;
    cin >> a;
    for (int i = 0; i < a; ++i) {
        cin >> x;
        if(x > 0)
            positive++;
        if (x < 0)
            negative++;
        if (x%2 ==0)
            even++;
        else
            odd++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}

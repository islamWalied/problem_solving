#include <iostream>

using namespace std;

int main() {
    long long a;
    cin >> a;
    long long arr[a],sum=0;
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < a; ++i) {
        sum += arr[i];
    }
    if (sum < 0)
    {
        cout << -sum;
    } else
        cout << sum;
}

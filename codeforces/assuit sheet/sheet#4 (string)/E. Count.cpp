#include <iostream>

using namespace std;

int main() {
    string s1;
    cin >> s1;

    long long sum = 0,a;
    a = s1.length();
    long long arr[a];
    for (int i = 0; i < a; ++i) {
        arr[i] = int(s1[i]);
        sum += arr[i];
    }
    cout << (sum - '0'*a);
}
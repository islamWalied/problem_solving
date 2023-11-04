#include <iostream>
#include <vector>

using namespace std;

int main() {
    string N;
    long long M;
    cin >> N >> M;
    long long res = 0;
    for (int i = 0; i < N.size(); ++i) {
        res *=10;
        res += N[i] - '0';
        res %= M;
    }
    if (res == 0)
        cout << "YES";
    else
        cout << "NO";
}
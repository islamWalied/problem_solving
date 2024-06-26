#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    vector<long long> b(m);

    long long sum_a = 0, sum_b = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum_a += a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
        sum_b += b[i];
    }

    if (sum_a == sum_b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
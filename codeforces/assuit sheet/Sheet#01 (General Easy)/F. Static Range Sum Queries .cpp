#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, m,x,a,b;
    cin >> n >> m;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }

    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        cout << prefix[b] - prefix[a-1] << endl;
    }

}

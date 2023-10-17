#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    vector<long long> arr(a);
    vector<long long> prefixSum(a + 1, 0);

    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
        prefixSum[i + 1] = prefixSum[i] + arr[i];
    }

    for (int i = 0; i < b; ++i) {
        long long x, y;
        cin >> x >> y;

        long long sum = prefixSum[y] - prefixSum[x - 1];
        cout << sum << endl;
    }

    return 0;
}
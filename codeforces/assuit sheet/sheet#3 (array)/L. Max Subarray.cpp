#include <iostream>
const long long N = 1e5;
using namespace std;

int main() {
    long long t;
    cin >> t;
    if (t >= 1 && t <= 5) {
        while (t--) {
            int n;
            cin >> n;
            long long arr[n];
            for (int i = 0; i < n; ++i) {
                cin >> arr[i];
            }
            for (int i = 0; i < n; i++) {
                for (int j = i; j < n; j++) {
                    long long max = -1e5;
                    for (int k = i; k <= j; k++) {
                        if (arr[k] > max) {
                            max = arr[k];
                        }
                    }
                    cout << max << " ";
                }
            }
            cout << endl;
        }
    }
}


#include <iostream>
const long long N = 1e5;
using namespace std;

int main() {
    int b,a,arr[N];
    cin >> a;
    while(a--) {

        cin >> b;
        for (int i = 0; i < b; i++) {
            cin >> arr[i];
        }

        long long sum = 0;
        long long result = 1e9;

        for (int i = 0; i < b; i++) { // i = 1, 2
            for (int j = i + 1; j < b; j++) { // j = 2 ,3
                sum = 0;
                sum = arr[i] + arr[j] + (j + 1) - (i + 1);
                if (sum < result) {
                    result = sum;
                }
            }
        }

        cout << result << endl;
    }
}

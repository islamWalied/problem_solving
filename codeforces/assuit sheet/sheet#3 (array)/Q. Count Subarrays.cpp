#include <iostream>
const long long N = 1e5;
using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int c = 0,count = 0;
        int a,arr[N];
        cin >> a;
        for (int i = 0; i < a; ++i) {
            cin >> arr[i];
        }
    for (int len = 1; len <= a; len++) {
        // Iterate through all sub arrays of length len
        for (int start = 0; start <= a - len; start++) {
            // Check if the subarray is non-decreasing
            bool isNonDecreasing = true;
            for (int i = start + 1; i < start + len; i++) {
                if (arr[i] < arr[i - 1]) {
                    isNonDecreasing = false;
                    break;
                }
            }
            if (isNonDecreasing) {
                count++;
            }
        }
    }
    cout << count << endl;
    }
}


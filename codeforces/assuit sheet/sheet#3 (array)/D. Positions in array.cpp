#include <iostream>

using namespace std;

int main() {
    long long a,key;
    cin >> a;
    long long arr[a];
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < a; ++i) {
        if (arr[i] <= 10 )
        {
            cout << "A[" << i << "] = " << arr[i] <<endl;
        }
    }
}

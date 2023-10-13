#include <iostream>
const long long N = 1e5;
using namespace std;

int main() {
    long long a,min = INT16_MAX,max = INT16_MIN, x = 0 ,y = 0;
    cin >> a;
    long long arr[a];
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
            x = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            y = i;
        }
    }
    swap(arr[x],arr[y]);

    for (int i = 0; i < a; ++i) {
        cout << arr[i] <<" ";
    }

}


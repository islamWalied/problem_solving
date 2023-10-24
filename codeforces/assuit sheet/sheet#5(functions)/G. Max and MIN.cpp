#include <iostream>

using namespace std;


void minmax(const long long arr[],long long size) {
    long long min = INT64_MAX;
    long long max = INT64_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << " " << max;
}


int main() {
    long long N;
    cin >> N;
    long long arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    minmax(arr,N);

}
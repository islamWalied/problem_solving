#include <iostream>
#include <vector>

using namespace std;

void newArray(long long arr[],long long arr1[] ,int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
}

int main() {
    int N, X;
    cin >> N;
    long long arr[N],arr1[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> arr1[i];
    }
    newArray(arr,arr1,N);

}
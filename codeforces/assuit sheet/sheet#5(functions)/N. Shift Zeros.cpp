#include <iostream>

using namespace std;

void shiftZeros(int A[], int N) {
    int nonZeroIndex = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] != 0) {
            swap(A[i], A[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    shiftZeros(A, N);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
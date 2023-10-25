#include <iostream>
#include <vector>

using namespace std;

void shiftRight(int A[], int N, int X) {
    long long S = X % N;
    for (int i = 0; i < X; i++) {
        int temp = A[N - 1];

        for (int j = N - 1; j > 0; j--) {
            A[j] = A[j - 1];
        }

        A[0] = temp;
    }
}

int main() {
    int N, X;
    cin >> N >> X;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    shiftRight(A, N, X);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
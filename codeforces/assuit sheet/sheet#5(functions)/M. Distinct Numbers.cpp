#include <iostream>
#include <algorithm>

using namespace std;

int countDistinct(int A[], int N) {
    sort(A, A + N);

    int distinctCount = 0;
    for (int i = 0; i < N; i++) {
        if (i == 0 || A[i] != A[i - 1]) {
            distinctCount++;
        }
    }

    return distinctCount;
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int distinctCount = countDistinct(A, N);
    cout << distinctCount << endl;

    return 0;
}
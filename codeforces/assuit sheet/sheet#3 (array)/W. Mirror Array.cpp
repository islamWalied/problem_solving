#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> A(N);

    // Input the 2D array
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int X, Y;
    cin >> X >> Y;

    if (allNeighborsX(A, X, Y)) {
        cout << "All neighbors of cell (" << X << ", " << Y << ") are 'x'." << endl;
    } else {
        cout << "Not all neighbors of cell (" << X << ", " << Y << ") are 'x'." << endl;
    }

    return 0;
}
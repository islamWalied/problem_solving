#include <iostream>
#include <vector>

using namespace std;

bool isValid(int x, int y, int N, int M) {
    return x >= 0 && x < N && y >= 0 && y < M;
}

bool allNeighborsX(vector<string>& A, int X, int Y) {
    int N = A.size();
    int M = A[0].size();

    // Define the possible neighbor offsets
    int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1};
    int dy[] = {0, -1, 0, 1, -1, 1, -1, 1};

    for (int i = 0; i < 8; i++) {
        int newX = X + dx[i];
        int newY = Y + dy[i];

        // Check if the neighbor cell is within the bounds of the array
        if (isValid(newX, newY, N, M)) {
            // If any neighbor is not 'x', return false
            if (A[newX][newY] != 'x') {
                return false;
            }
        }
    }

    // All neighbors are 'x'
    return true;
}

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
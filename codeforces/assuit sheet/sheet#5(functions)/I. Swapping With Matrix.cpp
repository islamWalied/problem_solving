#include <iostream>
#include <vector>

using namespace std;

void swapRows(vector<vector<int>>& A, int x, int y) {
    swap(A[x - 1], A[y - 1]);
}

void swapColumns(vector<vector<int>>& A, int x, int y) {
    for (int i = 0; i < A.size(); i++) {
        swap(A[i][x - 1], A[i][y - 1]);
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<vector<int>> A(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    swapRows(A, X, Y);
    swapColumns(A, X, Y);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

bool isValidCell(int x, int y, int N, int M) {
    return x >= 0 && x < N && y >= 0 && y < M;
}

bool allNeighborsAreX(const vector<vector<char>>& arr, int x, int y) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    int N = arr.size();
    int M = arr[0].size();

    for (int i = 0; i < 8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (isValidCell(nx, ny, N, M) && arr[nx][ny] != 'x') {
            return false;
        }
    }

    return true;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> arr(N, vector<char>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> arr[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;

    if (allNeighborsAreX(arr, X - 1, Y - 1)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

void printPascalTriangle(int N) {
    vector<vector<int>> triangle(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    printPascalTriangle(N);

    return 0;
}
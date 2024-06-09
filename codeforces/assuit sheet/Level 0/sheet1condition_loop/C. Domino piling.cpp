#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    int max_dominoes = (M * N) / 2;
    cout << max_dominoes << endl;

    return 0;
}

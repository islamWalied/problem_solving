#include <iostream>
using namespace std;

bool isInsideRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x, int y) {
    int minX = min(min(x1, x2), min(x3, x4));
    int maxX = max(max(x1, x2), max(x3, x4));
    int minY = min(min(y1, y2), min(y3, y4));
    int maxY = max(max(y1, y2), max(y3, y4));

    return (x >= minX && x <= maxX && y >= minY && y <= maxY);
}

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int xi, yi;
        cin >> xi >> yi;

        if (isInsideRectangle(x1, y1, x2, y2, x3, y3, x4, y4, xi, yi)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

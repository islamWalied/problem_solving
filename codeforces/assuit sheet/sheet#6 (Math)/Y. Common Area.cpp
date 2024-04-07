#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Rectangle {
    int x1, y1, x2, y2;
};

int calculateOverlapArea(vector<Rectangle>& rectangles) {
    int maxX1 = rectangles[0].x1;
    int maxY1 = rectangles[0].y1;
    int minX2 = rectangles[0].x2;
    int minY2 = rectangles[0].y2;

    // Find the maximum and minimum coordinates among all rectangles
    for (int i = 1; i < rectangles.size(); ++i) {
        maxX1 = max(maxX1, rectangles[i].x1);
        maxY1 = max(maxY1, rectangles[i].y1);
        minX2 = min(minX2, rectangles[i].x2);
        minY2 = min(minY2, rectangles[i].y2);
    }

    // Calculate the width and height of the common area
    int width = max(0, minX2 - maxX1);
    int height = max(0, minY2 - maxY1);

    // Return the area of the common area
    return width * height;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        vector<Rectangle> rectangles(N);
        for (int i = 0; i < N; ++i) {
            cin >> rectangles[i].x1 >> rectangles[i].y1 >> rectangles[i].x2 >> rectangles[i].y2;
        }

        int commonArea = calculateOverlapArea(rectangles);
        cout << "Case #" << t << ": " << commonArea << endl;
    }

    return 0;
}

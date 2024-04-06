#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to determine if circles intersect
bool circlesIntersect(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    double center_distance = distance((x1 + x2) / 2, (y1 + y2) / 2, (x3 + x4) / 2, (y3 + y4) / 2);
    double radius_sum = distance(x1, y1, x2, y2) / 2 + distance(x3, y3, x4, y4) / 2;
    return center_distance <= radius_sum;
}

int main() {
    // Input coordinates of diameter endpoints for circles A and B
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    // Check if circles intersect
    if (circlesIntersect(x1, y1, x2, y2, x3, y3, x4, y4)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

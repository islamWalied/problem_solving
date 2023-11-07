#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;
int main() {
    cout << fixed << setprecision(9);
    long long A,B,C,D;
    double dis;
    cin >>A >> B >> C >> D;
    dis = sqrt(pow((C - A),2) + pow((D - B),2));
    cout << dis;
}

//d=√((x2 – x1)² + (y2 – y1)²)
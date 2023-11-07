#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;
int main() {
    cout << fixed << setprecision(6);
    bool valid = true;
    long long A, B, C;
    double area, s;
    cin >> A >> B >> C;
    if (A + B <= C)
        valid = false;
    else if (A + C <= B)
        valid = false;
    else if (B + C <= A)
        valid = false;
    s = (A + B + C) / 2;
    area = sqrt(s * (s - A) * (s - B) * (s - C));
    if (valid){
        cout << "Valid" << endl;
        cout << area;
    }
    else
        cout << "Invalid" << endl;


}

// a+b > c
// a+c > b
// b+c > a
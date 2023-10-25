#include <iostream>
#include<iomanip>

using namespace std;

double sum = 0;

double average(double num,double size){
    double average;
    sum += num;
    return sum;
}

int main() {
    cout << fixed << setprecision(7);
    double N, X, Y,res;
    cin >> N;
    Y = N;
    while(N--)
    {
        cin >> X;
        res = average(X,N);
    }

    cout << res / Y;



}

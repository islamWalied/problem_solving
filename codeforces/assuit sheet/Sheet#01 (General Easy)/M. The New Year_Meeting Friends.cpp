#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c,avg = 0,dis=0;
    cin >> a >> b >> c;
    // avg = (a+b+c)/3;
    // // dis += a-avg;
    // dis += abs(c-avg);
    // cout << abs(b-avg) <<endl;
    // // cout <<avg <<endl;
    cout << max({a,b,c}) - min({a,b,c}) << endl;;
}
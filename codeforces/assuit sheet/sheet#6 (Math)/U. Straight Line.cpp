#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    long long x1,y1,x2,y2,x3,y3;

    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    long long res1 = (y3-y2) * (x2-x1);

    long long res2 = (y2-y1) * (x3-x2);

    if(res1 == res2){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    // y3 - y2      y2 - y1
    // --------  = ---------
    // x3 - x2      x2 - x1
}
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    int sum1 = n1 + n2;
    int sum2 = n1 +  n3;
    int sum3 = n2 +  n3;
    cout << max({sum1,sum2,sum3});
    return 0;
}

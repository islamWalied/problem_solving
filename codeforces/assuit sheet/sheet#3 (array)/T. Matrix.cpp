#include <iostream>
const long long N = 1e5;
using namespace std;
int main(){
    long long a,b,z,sum1 = 0,sum2 = 0,result = 0;
    cin >> a;
    long long arr[a][a];

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            if (i == j){
                sum1 += arr[i][j];
            }
        }
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            if (a-i-j == 1)
            {
                sum2 += arr[i][j];
            }
        }
    }
    result = sum1-sum2;
    cout << abs(result);
}


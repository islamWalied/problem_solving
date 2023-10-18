#include <iostream>

const long long N = 1e5;
using namespace std;
int main(){
    unsigned long long a,b = 0,x;
    cin >> a >> b;
    long long arr[a][b];
    if (a >= 1 && a<=100 && b >=1&& b<=100) {
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < a; ++i) {
            for (int j = b - 1; j >= 0; --j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}
#include <iostream>
const long long N = 1e5;
using namespace std;
int main(){
    long long a;
    cin >> a;
    long long arr[a];
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
        if (arr[i] % 2 != 0) {
            cout << 0;
            return 0;
        }
    }
    int  c = 0, flag = 0;
    while (flag == 0) {
        for (int i = 0; i < a; ++i) {
            if (arr[i] % 2 == 0) {
                arr[i] = arr[i] / 2;
            } else {
                flag = 1;
                break;
            }

        }
        c++;
    }
    cout << c - 1 << endl;
}


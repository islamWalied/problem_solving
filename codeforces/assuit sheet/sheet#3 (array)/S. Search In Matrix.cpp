#include <iostream>
const long long N = 1e5;
using namespace std;
int main(){
    long long a,b,z,found = 0;
    cin >> a >> b;
    long long arr[a][b];

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cin >> arr[i][j];
        }
    }
    cin >> z;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            if (arr[i][j] == z)
            {
                found = 1;
            }
        }
    }
    if (found == 1){
        cout << "will not take number";
    }
    else {
        cout << "will take number";
    }
}


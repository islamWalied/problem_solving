#include <iostream>
const long long N = 1e5;
using namespace std;

int main() {
    int b,a,arr[N], min = INT16_MAX,count=0;
    cin >> a;
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
        if(arr[i] < min){
            min = arr[i];
        }
    }
    for (int i = 0; i < a; ++i) {
        if (arr[i] == min)
            count++;
    }
    if (count %2 == 0)
    {
        cout << "Unlucky";
    }
    else{

    cout << "Lucky";
    }
}
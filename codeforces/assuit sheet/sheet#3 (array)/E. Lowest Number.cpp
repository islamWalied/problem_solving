#include <iostream>

using namespace std;

int main() {
    long long a,key;
    cin >> a;
    long long arr[a],min = INT16_MAX,pos;
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < a; ++i) {
        if (arr[i] < min){
            min = arr[i];
            pos = i+1;
        }
    }
    cout << min << " " << pos;
}

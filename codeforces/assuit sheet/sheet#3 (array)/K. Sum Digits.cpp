#include <iostream>
const long long N = 1e5;
using namespace std;

int main() {
    string s;
    int a,arr[N],sum = 0;
    cin >> a;
    cin >> s;
    for(int i = 0; i < a;i++){
        arr[i] = int(s[i]);
        sum += arr[i];
    }
    cout << sum - ('0'*a);

}

#include <iostream>

const long long N = 1e5;
using namespace std;
int main(){
    unsigned long long a,b = 0,x;
    cin >> a >> b;
    long long arr[a],sum[b+1] = {};
    for(long long i = 0;i < a;i++){
        cin >> arr[i];
        x = arr[i];
        sum[x]++;
    }
    for(long long i = 1;i < b+1;i++){
        cout << sum[i] << endl;
    }

}
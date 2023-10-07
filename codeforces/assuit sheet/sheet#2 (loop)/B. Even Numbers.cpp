#include <iostream>

using namespace std;

int main() {
    long long a,c = 0;
    cin >> a;
    for (int i = 1; i <= a; ++i) {
        if(i%2 == 0){
            cout << i << endl;
            c++;
        }
    }
    if (c == 0)
    {
        cout << -1;
    }
}

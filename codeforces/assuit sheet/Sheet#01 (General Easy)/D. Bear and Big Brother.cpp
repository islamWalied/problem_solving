#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int count  = 0;
    if (n == m)
    {
        cout << 1;
        return 0;
    }
    while(n <= m){
        count++;
        n *= 3;
        m *= 2;
    }
    cout << count;
}
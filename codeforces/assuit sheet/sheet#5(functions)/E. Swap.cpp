#include <iostream>

using namespace std;

void swap(int x,int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    long long N, x;
    cin >> N >> x;
    swap(N,x);
    cout << N << " " << x;

}
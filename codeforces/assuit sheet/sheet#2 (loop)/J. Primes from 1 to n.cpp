#include <iostream>

using namespace std;

int main() {
    int a, i = 2;
    cin >> a;
    while (i <= a) {
        int prime = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) {
                prime = 1;
                break;
            }
        }
        if (prime == 0)
            cout << i << " ";
        i++;
    }
}
#include <iostream>
#include <string>

using namespace std;


int main() {
    int N;
    cin >> N;
    long long arr[123] = {};
    for (int i = 0; i < N; ++i) {
        char s;
        cin >> s;
        arr[s]++;
    }
    for (int i = 0; i < 123; ++i) {
        if (arr[i] != 0)
        {
            while (arr[i]--)
            {
                cout << char(i);
            }
        }
    }
}
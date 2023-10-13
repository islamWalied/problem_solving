#include <iostream>

using namespace std;

int main() {
    long long a,key;
    cin >> a;
    long long arr[a],found=-1;
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }
    cin >> key;
    for (int i = 0; i < a; ++i) {
        if (arr[i] == key)
        {
            found = i;
            break;
        }
    }
    if (found == -1)
        cout << -1;
    else
        cout << found;
}

#include <iostream>

using namespace std;

int main() {
    long long a,b;
    string s1;
    cin >> b;
    for (int i = 0; i < b; ++i) {
        cin >> s1;
        a = s1.length();
        if (a > 10)
        {
            cout << s1[0] << a-2 << s1[a-1] << endl;
        }
        else
        {
            cout << s1 << endl;
        }
    }
}
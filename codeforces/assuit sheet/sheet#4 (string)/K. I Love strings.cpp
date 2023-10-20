#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    long long a;
    string s1,s2;
    cin >> a;
    while (a--)
    {
        cin >> s1 >> s2;
        long long b = max(s1.size(),s2.size());

        for (int i = 0; i < b; ++i) {
            if (i < s1.size())
            {
                cout << s1[i];
            }
            if (i < s2.size()) {
                cout << s2[i];
            }
        }
        cout << endl;
    }
}
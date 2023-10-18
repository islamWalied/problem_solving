#include <iostream>

using namespace std;

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    cout << s1.length() << " " << s2.length() << endl;
    for (char i : s1) {
        cout << i;
    }
    cout << " ";
    for (char i : s2) {
        cout << i;
    }
}

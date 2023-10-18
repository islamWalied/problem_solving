#include <iostream>

using namespace std;

int main() {
    long long l1,l2;
    string s1,s2;
    char c1,c2;
    cin >> s1 >> s2;
    l1 = s1.length();
    l2 = s2.length();
    cout << l1 << " " << l2 << endl;
    cout << s1 << s2 << endl;
    c1 = s1[0];
    c2 = s2[0];
    s1[0] = c2;
    s2[0] = c1;
    cout << s1 << " " << s2;
}
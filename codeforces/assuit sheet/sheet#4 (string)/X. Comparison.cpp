#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    string S;
    cin >> S;

    int n = S.size();
    string smallest = S;

    for (int i = 1; i < n; i++) {
        string part1 = S.substr(0, i);
        string part2 = S.substr(i);

        sort(part1.begin(), part1.end());
        sort(part2.begin(), part2.end());

        string combined = part1 + part2;
        smallest = min(smallest, combined);
    }

    cout << smallest << endl;

    return 0;
}

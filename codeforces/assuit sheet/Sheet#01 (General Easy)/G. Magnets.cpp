#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    int n;
    cin >> n;

    vector<string> magnets(n);

    for (int i = 0; i < n; ++i) {
        cin >> magnets[i];
    }

    int groupCount = 1;

    for (int i = 1; i < n; ++i) {
        if (magnets[i] != magnets[i - 1]) {
            ++groupCount;
        }
    }

    cout << groupCount << endl;

    return 0;
}

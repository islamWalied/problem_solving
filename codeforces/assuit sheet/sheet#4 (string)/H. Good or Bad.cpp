#include <iostream>
#include <string>

using namespace std;

bool isGoodString(const string& S) {
    size_t pos1 = S.find("010");
    size_t pos2 = S.find("101");
    return (pos1 != string::npos) || (pos2 != string::npos);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        if (isGoodString(S)) {
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
    }

    return 0;
}
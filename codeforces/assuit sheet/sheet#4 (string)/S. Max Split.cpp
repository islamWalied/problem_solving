#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> splitBalancedString(const string& S) {
    vector<string> result;
    int count = 0;
    string currentString;

    for (char c : S) {
        currentString += c;
        if (c == 'L') {
            count++;
        } else {
            count--;
        }

        if (count == 0) {
            result.push_back(currentString);
            currentString = "";
        }
    }

    return result;
}

int main() {
    string S;
    cin >> S;

    vector<string> balancedStrings = splitBalancedString(S);
    cout << balancedStrings.size() << endl;
    for (const string& str : balancedStrings) {
        cout << str << endl;
    }

    return 0;
}
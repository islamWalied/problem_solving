#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

void reverseWords(string& S) {
    stringstream ss(S);
    string word;
    string reversedString;

    while (ss >> word) {
        reverse(word.begin(), word.end());
        reversedString += word + " ";
    }

    // Remove trailing space
    if (!reversedString.empty()) {
        reversedString.pop_back();
    }

    S = reversedString;
}

int main() {
    string S;
    getline(cin, S);

    reverseWords(S);

    cout << S << endl;

    return 0;
}
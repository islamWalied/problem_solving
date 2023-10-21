#include <iostream>
#include <string>

using namespace std;

int countWords(const string& S) {
    int count = 0;
    bool isWord = false;

    for (char c : S) {
        if (isalpha(c)) {
            if (!isWord) {
                count++;
                isWord = true;
            }
        }
        else {
            isWord = false;
        }
    }

    return count;
}

int main() {
    string S;
    getline(cin, S);

    int wordCount = countWords(S);

    cout << wordCount << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <map>

using namespace std;

void printLetterFrequency(const string& S) {
    map<char, int> frequencyMap;

    // Count the frequency of each letter
    for (char c : S) {
        frequencyMap[c]++;
    }

    // Print the frequency of each letter in ascending order
    for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }
}

int main() {
    string S;
    cin >> S;

    printLetterFrequency(S);

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string dna;
    cin >> dna;

    int maxLength = 1;
    int currentLength = 1;

    for (size_t i = 1; i < dna.length(); ++i) {
        if (dna[i] == dna[i - 1]) {
            ++currentLength;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 1;
        }
    }
    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    cout << maxLength << endl;
}
